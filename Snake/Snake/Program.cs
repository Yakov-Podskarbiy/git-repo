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
            HLines line = new HLines(0, 50, 0, '*');
           // VLines line = new VLines(6, 0, 10, '*');
            line.writeHorizLine();

           VLines line2 = new VLines(50, 0, 20, '*');
            line2.writeVerticalLine();

            Console.ReadLine();
        }

       



    }

      
          
          

        }
    

