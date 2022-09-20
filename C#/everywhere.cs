using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            string a = Console.ReadLine();
            int tc;
            int.TryParse(a, out tc);
            
            int i = 0;
            while(i<tc)
            {
                string b = Console.ReadLine();
                int n;
                int.TryParse(b, out n);
                string[] city = new string[n];
                int x = 0;
                while (x<n)
                {
                    city[x] = Console.ReadLine();
                    x += 1;
                }
                int v = 0;
                while(v<n)
                {
                    int w = v + 1;
                    while (w<n)
                    {
                        if(city[v]==city[w])
                        {
                            city[w] = null;
                        }
                        w += 1;
                    }
                    v++;
                }
                int r = 0,indeks=0;
                while(r<n)
                {
                    if(city[r]!=null)
                    {
                        indeks += 1;
                    }
                    r++;
                }
                Console.WriteLine(indeks);
                i++;


            }

        }
    }
}