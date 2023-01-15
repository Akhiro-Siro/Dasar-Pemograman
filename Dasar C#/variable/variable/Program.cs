using System;

namespace variable
{
    class Program
    {
        static void Main(string[] args)
        {
            int x = 10; //tipe data integer atau bilangan bulat
            double y = 2.12; // tipe data double atau desimal
            char n = 'y'; //tipe data charakter cuman bisa di isi 1 data
            string hai = "halo ...."; //tipe data string atau kalimat
            bool benar = true; //tipe data bolean atau kondisi true or flase atau benar atau salah


            Console.WriteLine(x);
            Console.WriteLine(y);
            Console.WriteLine(n);
            Console.WriteLine(hai);
            Console.WriteLine(benar);

            //variable bisa di deklarasikan dulu baru di isi
            int x1;
            x1 = 120;
            Console.WriteLine(x1);
            //bisa juga di tambahkan operasi aritmatika
            x1 = x1 - 10;
            Console.WriteLine(x1);



        }
    }
}
