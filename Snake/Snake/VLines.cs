using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Snake
{
    class VLines : Figure
    {
  

        public VLines(int x, int y_left, int y_right, char sym)
        {
            pList = new List<Point>();

            for (int y = y_left; y <= y_right; y++)
            {
                Point p = new Point(x, y, sym);
                pList.Add(p);
                
            }

            }

        
    }
}
