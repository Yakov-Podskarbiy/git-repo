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
            Console.SetBufferSize(80, 25);

            HLines Topline = new HLines(0, 78, 0, '*');
            HLines Bottomline = new HLines(0, 78, 24, '*');
          
           VLines Leftline = new VLines(0, 0, 24, '*');
           VLines Rigthline = new VLines(78, 0, 24, '*');

            Topline.writelLine();
            Bottomline.writelLine();
            Leftline.writelLine();
            Rigthline.writelLine();
            
            // отрисовка точки

            Point p = new Point(10, 15, '+');

            Snake snake = new Snake(p, 5, Direction.RIGHT );
            
            snake.writelLine();

            Console.ReadLine();
        }

       



    }

      
          
          

        }
    

