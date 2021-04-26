using System;

namespace LinearSearch
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] A = {12,9,3,7,14,11,6,2,10,5}; 
            Console.WriteLine(linearSearch(A, A.Length-1, 5));
        }

        public static int linearSearch(int[] A, int n, int x){

            int NOT_FOUND =  -1;
            int answer = 0;
        
            for (int i =0; i <= n; i++) {
                if (A[i] == x) {
                    answer = x;
                }
            }
            return answer;
        }
    }
}
