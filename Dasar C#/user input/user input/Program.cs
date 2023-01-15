using System;

namespace user_input
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("masukan tulisan!.. :");

            string masuk = Console.ReadLine();

            Console.WriteLine("anda menuliskan... : {0}",masuk);

            Console.ReadLine();

        }
    }
}
