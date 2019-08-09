#include <iostream>

using namespace std;

void selectionSort(int A[], int n) {
    
    //Inputs:
    //    A : an array.
    //    n : the number of elements in A to sort.
    
    int smallest; // declare smallest index integer for subarray
    
    //Step 1 - For i = 1 to n - 1 -> (adjust outer for-loop for Array A to For i = 0 to n - 1)

    for(int i = 0; i < (n-1); i++){

	//Step 1A - Set smallest to i:
        smallest = i;
    	
    	for(int j = i+1; j < n; j++) {

		//Step 1B-i - If A[j] < A[smallest], then set smallest to j
            
	//truth table (optional)
      //cout << (A[j]) << (A[smallest]) << ((A[j])<(A[smallest])) << (A[I]) <<  endl; 
      
            if (A[j] < A[smallest]) {
                smallest = j;

            		}


			}

		//Step 1C - Swap A[i] with A[smallest]
        	swap(A[i], A[smallest]);


		}

		
  
	}


void printArray(int * A, int length) {

for (int i = 0; i < length; i++) {

cout <<  A[i] << endl;

	}

}

	
int main () {

int A[] = {12,9,3,7,14,11}; //Test Array A ranging from A[0]-A[9]

int n = sizeof(A)/sizeof(A[0]); //Test array length

selectionSort(A,n); //Test example

printArray(A,n); //Test print sorted array

}
