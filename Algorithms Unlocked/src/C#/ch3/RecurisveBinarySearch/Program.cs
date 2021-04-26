using System;

namespace RecurisveBinarySearch
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] A = {1,2,3,4,5,6,7,8,9,10};
            Console.WriteLine(recurisveBinarySearch(A, 0, A.Length - 1, 10));
        }


        static int recurisveBinarySearch(int [] A, int p, int r, int x){
            int NOT_FOUND = -1;

            if (p>r){
                return NOT_FOUND;
            } 

            int q = p+r/2;

            if (A[q] == x){
                return q;
            } else if (A[q] > x){
               return recurisveBinarySearch(A, p, q - 1, x);
            } else {
               return recurisveBinarySearch(A, q + 1, r, x);
            }
        }
    }
}
