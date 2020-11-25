using System;
using System.Collections.Generic;
using System.Linq;

namespace ch3
{
    class Program
    {
        static void Main(string[] args)
        {

            int[] A = {12,9,3,7,14,11,6,2,10,5}; 
            mergeSort(A, 0, A.Length - 1);
            Array.ForEach(A, Console.WriteLine);
        }
        public static void mergeSort(int[] A, int p, int r){

            //Base Case
            if (p >= r) {
                return;
            }

            //Set q to (p+r)/2
            int q =  (p+r)/2;

            mergeSort(A, p, q);
            mergeSort(A, q + 1, r);
            merge(A, p, q, r);
        }


        public static void merge(int[] A, int p, int q, int r){

            int n1 =  q - p + 1;
            int n2 =  r - q;
            int infinity =  100000000;
            int i = 0, j = 0;

            int[] B = new int [n1 + 1];
            int[] C = new int [n2 + 1];

             for (i = 0; i < n1; i++){
                 B[i] = A[p+i];
             }

             for (i = 0; i < n2; i++){
                 C[i] = A[q+1+i];
             }

            i = 0; j= 0;

            B[n1] = infinity;
            C[n2] = infinity;

            for (int k = p; k <= r; k++){
                if (B[i] <= C[j]) {
                    A[k] = B[i];
                    i++;
                } else if (B[i] > C[j]) {
                    A[k] =  C[j];
                    j++;
                }
            }
        }
    }
}
