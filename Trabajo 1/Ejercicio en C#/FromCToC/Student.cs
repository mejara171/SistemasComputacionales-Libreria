using System;
using System.Collections.Generic;
using System.Text;

namespace FromCToC
{
    public class Student : Person
    {

        public int Grade { get; set; }

       
        public override string GetDetails() => $"{FullName} de edad {Age}, Grado = {Grade}";
       

    }
}
