using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Snake
{
    class HLines : Figure
    {
      

        public HLines(int x_left, int x_right, int y, char sym)
        {
            pList = new List<Point>();

            for (int x = x_left; x <= x_right; x++)
            {
                Point p = new Point(x, y, sym);
                pList.Add(p);
                
            }



            }

       }
}
