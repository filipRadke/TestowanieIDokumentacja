namespace Numbers
{
    internal class Program
    {
        static float Add(float x, float y)
        {
            return x + y;
        }
        static float Substract(float x, float y)
        {
            return x - y;
        }

        static float Multiply(float x, float y)
        {
            return x * y;
        }

        static float Divide(float x, float y) 
        {
            return x / y;
        }

        static bool IsEaven(int x)
        {
            if(x != 0 && x % 2 == 0) return true;
            return false;
        }

        static bool IsPrime(int x)
        {
            if (x <= 1) return false;
            for(int i = 2;i*i <= x; i++)
            {
                if(x % i == 0) return false;
            }
            return true;
        }

        static void Main(string[] args)
        {
            float x = 6, y = 4;
            int i = 7;

            Console.WriteLine($"x = {x}, y = {y}");
            Console.WriteLine($"Add: {Add(x, y)}");
            Console.WriteLine($"Substract: {Substract(x,y)}");
            Console.WriteLine($"Multiply: {Multiply(x, y)}");
            Console.WriteLine($"Divide: {Divide(x, y)}");
            Console.WriteLine($"IsEaven: {IsEaven(i)}");
            Console.WriteLine($"Substract: {IsPrime(i)}");
        }
    }
}
