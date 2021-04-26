using System;

namespace BinarySearch
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] A = {1,2,3,4,5,6,7,8,9,10}; 
            Console.WriteLine(binarySearch(A, A.Length - 1, 5));
        }
        static int binarySearch(int[] A, int n, int x){
            int NOT_FOUND = -1;
            int p = 0;
            int r = n;
    
        while (p <= r) {
            int q =  (p + r)/2;
            if (A[q] == x){
                return q;
            } else if (A[q] > x) {
                r =  q - 1;
            } else if (A[q] < x) {
                p =  q + 1;
            }  
        }
            return NOT_FOUND;
        }
    }
}
