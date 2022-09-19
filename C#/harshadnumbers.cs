using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace harshadnumber
{
    class Program
    {
        static void Main(string[] args)
        {
            string angka = Console.ReadLine();
            int total = 0;
            int isHarshad = 0;
            do
            {
                total = 0;
                for (int i = 0; i < angka.Length; i++)
                {
                    int number;
                    int.TryParse(angka[i] + "", out number);
                    total += number;
                }
                int angka2;
                int.TryParse(angka, out angka2);
                if(angka2%total==0)
                {
                    isHarshad = 1;
                    Console.WriteLine(angka);
                }
                else
                {
                    angka2++;
                    angka = angka2 + "";
                }
            } while (isHarshad != 1);
            
        }
    }
}