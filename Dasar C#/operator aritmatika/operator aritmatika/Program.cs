using System;

namespace operator_aritmatika
{
    class Program
    {
        static void Main(string[] args)
        {

            /**  operator aritmatika
            1). + penjumlahan
            2). - pengurangan
            3). * perkalian
            4). / pembagian
            5). % modulus atau sisa bagi
             */

            
            Console.WriteLine("operasi matematika");

            Console.Write("masukan nilai x..: ");
            int x = Convert.ToInt32(Console.ReadLine());

            Console.Write("masukan nilai y..: ");
            int y = Convert.ToInt32(Console.ReadLine());





            Console.WriteLine("hasil dari x + y = {0}", x+y);
            Console.WriteLine("hasil dari x - y = {0}", x - y);
            Console.WriteLine("hasil dari x * y = {0}", x * y);
            Console.WriteLine("hasil dari x / y = {0}", Convert.ToDouble(x) / Convert.ToDouble(y) );
            Console.WriteLine("hasil dari x % y = {0}", x % y);


            Console.ReadLine();
        }
    }
}
