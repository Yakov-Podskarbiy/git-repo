using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Snake
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = 50;

            for (int i = 10; i <= n; i++)
            {
                int x1 = i;
                int y1 = 0;
                char s1 = '*';

                wr(x1, y1, '*');

            }

            Console.ReadLine();
            
           }

       static void wr(int x, int y, char s)
        {
            Console.SetCursorPosition(x, y);
            Console.WriteLine(s);
          
          

        }
    }
}
