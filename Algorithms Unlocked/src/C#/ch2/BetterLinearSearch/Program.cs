using System;

namespace BetterLinearSearch
{
    class Program
    {

        static void Main(string[] args)
        {
            int[] A = {12,9,3,7,14,11,6,2,10,5}; 
            Console.WriteLine(betterLinearSearch(A, A.Length-1, 5));
        }

        public static int betterLinearSearch(int[] A, int n, int x){

            int NOT_FOUND =  -1;

            for (int i =0; i <= n; i++) {
                if (A[i] == x) {
                    return A[i];
                }
            }
            return NOT_FOUND;
        }
    }
}
