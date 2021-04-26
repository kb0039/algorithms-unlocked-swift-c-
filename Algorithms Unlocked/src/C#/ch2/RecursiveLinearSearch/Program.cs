using System;

namespace RecursiveLinearSearch
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] A = {12,9,3,7,14,11,6,2,10,5}; 
            Console.WriteLine(recursiveLinearSearch(A, A.Length-1, 1, 5));
        }

        private static int recursiveLinearSearch(int[] A, int n, int i, int x){
            int NOT_FOUND = -1;
            if (i > n){
                return NOT_FOUND;
            } else if (i <=n && A[i]==x){
                return i;
            } else if (i <=n && A[i] != x) {
                return recursiveLinearSearch(A, n, i + 1, x);    
            }
            return NOT_FOUND;   
        }
    }
}
