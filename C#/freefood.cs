using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace freefood
{
    class Program
    {
        static void Main(string[] args)
        {
            int tc = Convert.ToInt32(Console.ReadLine());
            string input;
            int awal;
            int akhir;
            List<int> list = new List<int>();
            for (int i = 0; i < tc; i++)
            {
                input = Console.ReadLine();
                string[] inputs = input.Split(' ');
                int.TryParse(""+inputs[0], out awal);
                int.TryParse("" + inputs[1], out akhir);
                for(int k=awal;k<=akhir;k++)
                {
                    if(!list.Contains(k))
                        list.Add(k);
                }
            }
            Console.WriteLine(list.Count);
            
        }
    }
}