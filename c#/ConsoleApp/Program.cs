using System;

namespace Numbers
{
    public class Operations
    {
        private int a { get; set; }
        private int b { get; set; }
        public Operations(int x, int y)
        {
            this.a = x;
            this.b = y;
        }
        public int MultiplicationByAddition()
        {
            int r = 0;
            for (int i = 0; i < this.a; i++)
            {
                r += this.b;
            }

            return r;
        }

        public int ModuloBySubstraction()
        {
            if (this.a < 0 || this.b <= 0) return -1;

            int temp = this.a;
            while (temp > this.b) { temp -= this.b; }

            return temp;
        }

        public static void Main()
        {
            Operations o = new Operations(20, 3);

            Console.WriteLine($"20 % 3 == {o.ModuloBySubstraction()}");
        }
    }
}
