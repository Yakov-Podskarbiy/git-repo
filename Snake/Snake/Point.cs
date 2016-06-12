using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;

namespace Snake
{
    class Point
    {
        public int x;
        public int y;
        public char sym;

        public void Dr ()
        {

            Console.SetCursorPosition(x, y);
            Console.WriteLine(sym);
        }

    }
}
