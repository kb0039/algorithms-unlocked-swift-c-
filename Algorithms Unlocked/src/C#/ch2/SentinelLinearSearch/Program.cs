using System;

namespace SentinelLinearSearch
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] A = {12,9,3,7,14,11,6,2,10,5}; 
            Console.WriteLine(sentinelLinearSearch(A, A.Length-1, 4));
        }

        public static int sentinelLinearSearch(int[] A, int n, int x){

            int NOT_FOUND = -1;
            int last =  A[n];
            A[n] = x;
            int i = 0;

            while (A[i] != x){
                i++;
            }

            A[n] = last;

            if ( (i < n)|| (A[n] == x) ){
                return A[i];
            }

            return NOT_FOUND;
        }
    }
}
