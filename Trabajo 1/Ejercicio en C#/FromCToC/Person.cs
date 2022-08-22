using System;
using System.Collections.Generic;
using System.Text;

namespace FromCToC
{
    public class Person
    {

        private int identification;
        public int Identification
        {
            get
            {
                return identification;
            }
            set
            {
                identification = value;
            }
        }
        public string FullName { get; set; }

        public int Age { get; set; }

        public virtual string GetDetails() => $"{FullName} de edad {Age}";

        public string GetDetails(double height) => $"{FullName} de edad {Age}";

    }
}
