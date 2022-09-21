using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace recount
{
    class Program
    {
        static void Main(string[] args)
        {
            string input;
            Dictionary<string, int> kandidat = new Dictionary<string, int>();
            input = Console.ReadLine();
            while(input!="***")
            {
                if(!kandidat.ContainsKey(input))
                {
                    kandidat.Add(input, 1);
                }
                else
                {
                    kandidat[input]+=1;
                }
                input = Console.ReadLine();
            }
            var myList = kandidat.ToList();

            myList.Sort((pair1, pair2) => pair2.Value.CompareTo(pair1.Value));
            if(myList[0].Value==myList[1].Value)
            {
                Console.WriteLine("Runoff!");
            }
            else
                Console.WriteLine(myList[0].Key);
            
        }
    }
}
