using System;

namespace BadFactorial
{
    class Program
    {
        static void Main(string[] args)
        {
           Console.WriteLine(badFactorial(5));
        }

        private static int badFactorial(int n){
            if(n==0){
                return 1;
            } else {
                return badFactorial((n+1))/(n+1);
            }
        }
    }
}
