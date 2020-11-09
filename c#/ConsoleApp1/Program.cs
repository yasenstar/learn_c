using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("Enter your name: ");
            String name = Console.ReadLine();
            Console.WriteLine("Your Name is {0}", name);

            Console.ReadLine();

            HelloClient client = new HelloClient();

            // Use the 'client' variable to call operations on the service.

            // Always close the client.
            client.Close();
        }
    }
}
