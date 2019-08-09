#include <iostream>

using namespace std;

int sentinelSearch(int *A, int n, int x){
//Inputs:
    //    A : an array.
    //    n : the number of elements in A to search through.
    //    x : the value being searched for.

int NOT_FOUND = -1; //Returns -1 when result is NULL or NILL

//Step 1 - Save A[n] into last then put x into A[n].

int last = A[n-1]; //(arrays index starting at 0, so switch n to n-1)
A[n-1] = x; //insert x into A[n-1]


//Step 2 - Set i to 1.

int i = 0;

//Step 3 - While A[i] ≠ x , do the following:
    while (A[i] != x) {
        i = i + 1;
    }
//Step 4 - Restore A[n-1] from last.
    A[n-1] = last;
    
//Step 5 - If i < n or A [ n ] = x , then return the value of i as the
    if ((i < (n-1)) || (A[n-1] == x)) {
        
        return i;
    }
    
//Step 6 - Otherwise, return NOT-FOUND as the output.
    return NOT_FOUND;
}


int main(){

int A[10] = {1,2,3,4,5,6,7,8,9,10}; //Test Array A ranging from A[0]-A[9]

cout << sentinelSearch(A,10,10) << endl;


}



