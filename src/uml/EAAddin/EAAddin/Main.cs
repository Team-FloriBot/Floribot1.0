using System;
using System.Collections.Generic;
using System.Text;

namespace FloribotAddin
{
    public class Main
    {
        //Called Before EA starts to check Add-In Exists
        public String EA_Connect(EA.Repository Repository)
        {
            //No special processing required.
            return "a string 3";
        }

        public object GetTestString(EA.Repository Repository, params object[] args)
        {
            string[] parameters = (string[]) args[0];

            return parameters.Length;
        }

        public object GetPartClassifier(EA.Repository Repository, params object[] args)
        {
            string[] parameters = (string[]) args[0];
            EA.Element part = Repository.GetElementByGuid(parameters[0]);

            return part.ClassifierName;
        }

        public object GetPortInterfaceClassifier(EA.Repository Repository, params object[] args)
        {
            string[] parameters = (string[])args[0];
            EA.Element part = Repository.GetElementByGuid(parameters[0]);
            int classifierID = part.ClassifierID;
            EA.Element classifier = Repository.GetElementByID(classifierID);
            string packageGUID = Repository.SQLQuery("Select ea_guid FROM t_object WHERE pdata1=\"" + classifier.PackageID + "\";");
            packageGUID = packageGUID.Substring(packageGUID.IndexOf("{"), 38);
            EA.Element package = Repository.GetElementByGuid(packageGUID);

            return package.Name + "." + classifier.Name;
        }

        public object GetPartLaunch(EA.Repository Repository, params object[] args)
        {
            string[] parameters = (string[])args[0];
            EA.Element part = Repository.GetElementByGuid(parameters[0]);
            string classifierGUID = Repository.SQLQuery("Select pdata1 FROM t_object WHERE ea_guid=\"" + parameters[0] + "\";");
            classifierGUID = classifierGUID.Substring(classifierGUID.IndexOf("{"),38);
            EA.Element classifier = Repository.GetElementByGuid(classifierGUID);
            string packageGUID = Repository.SQLQuery("Select ea_guid FROM t_object WHERE pdata1=\"" + classifier.PackageID + "\";");
            packageGUID = packageGUID.Substring(packageGUID.IndexOf("{"), 38);
            EA.Element package = Repository.GetElementByGuid(packageGUID);

            string code;
            code = "<include file=\\\"$(find " + package.Name + ")/launch/" + part.Name + ".launch\\\" />";
            
            return code;
        }

        private Boolean isNode(EA.Element part)
        {
            bool result = true;
            foreach (EA.Element elem in part.EmbeddedElements)
            {
                result = result && !elem.Type.Equals("Part");
            }
            return result;
        }

        private String getParams(EA.Element part)
        {
            String result = "";
            foreach (EA.Attribute attr in part.Attributes)
            {
                result = result + "<param name=\\\"" + attr.Name + "\\\" value=\\\"" + attr.Default + "\\\" />\n  ";
            }
            return result;
        }
    }
}
