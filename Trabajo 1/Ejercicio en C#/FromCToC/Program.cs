using System;

namespace FromCToC
{
    class Program
    {
        static void Main(string[] args)
        {
            Person person = new Person() { Age = 15, FullName = "Carlos Restrepo", Identification = 70691941 };
            Console.WriteLine(person.GetDetails());


            Student student = new Student() { Age = 18, FullName = "Julian Garcia", Grade = 11, Identification = 1000874805 };
            Console.WriteLine(student.GetDetails());
        }
    }
}
