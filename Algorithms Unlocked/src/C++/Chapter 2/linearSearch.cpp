#include <iostream>

using namespace std;

int linearSearch(int *A, int n, int x){

    //Inputs:
    //    A : an array.
    //    n : the number of elements in A to search through.
    //    x : the value being searched for

int NOT_FOUND = -1; //Returns -1 when result is NULL or NILL

//Step 1 - Set answer to NOT-FOUND.
int answer = NOT_FOUND;

//Step 2 - For each index i , going from 1 (array index begin at 0) to n , in order:
for (int i=0; i<n; i++) {

     if(A[i]== x) {

	answer = x;

		}

	}
//Step 3 - Return the value of answer as the output.
    return answer;
}

int main(){

int A[10] = {1,2,3,4,5,6,7,8,9,10}; //Test array A[0]-A[9]

cout << linearSearch(A,10,10) << endl; //Test example

}



