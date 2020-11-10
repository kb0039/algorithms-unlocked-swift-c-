#include <iostream>
using namespace std;

int betterLinearSearch(int *A, int n, int x){
    
    //Inputs:
    //    A : an array.
    //    n : the number of elements in A to search through.
    //    x : the value being searched for.

int NOT_FOUND =  -1; //Returns -1 when result is NULL or NILL

//Step 1 - For i = 1 (array index begins at 0) to n : If A [i] = x , then return the value of i as the output.
for (int i=0; i<n; i++) {

    //Step 1A - If A[i] = x , then return the value of i as the output.
     if(A[i]== x) {

	 return x;

		}

	}
// Step 2 - Return NOT-FOUND as the output.
return NOT_FOUND;
    
}

int main(){

int A[10] = {1,2,3,4,5,6,7,8,9,10}; //Test Array A ranging from A[0]-A[9]
cout << betterLinearSearch(A,10,10) << endl; // Test example

}



