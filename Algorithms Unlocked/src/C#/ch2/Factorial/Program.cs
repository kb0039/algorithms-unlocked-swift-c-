using System;

namespace Factorial
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(factorial(5));
        }

        private static int factorial(int n){
                if (n==0){
                    return 1;
                } else {
                   return n * factorial(n-1);
                }
            }
    }
}
