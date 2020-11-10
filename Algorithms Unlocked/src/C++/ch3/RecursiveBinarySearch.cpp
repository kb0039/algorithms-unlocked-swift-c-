#include <iostream>

using namespace std;

int recursiveBinarySearch(int*A, int p, int r, int x) {
    
    //Inputs:
    //    A : an array.
    //    p,r : delineates the subarray A[p..r] under consideration
    //    x : the value being searched for
    
    int NOT_FOUND = -1; //Returns -1 when result is NULL or NILL
    
    //Step 1 - Set answer to NOT-FOUND.
    if (p > r) {
        return NOT_FOUND;
    }
    
    //Step 2 - Otherwise (p ≤ r), do the following:
        
    //Step 2A - Set q to (p + r)/2.
    int q = (p+r)/2;
    
    //Step 2B - If A[q] = x ,then return q.
    if (A[q] == x){
        return q;
    }
        
        //Step 2C - Otherwise (A[q] ≠ x), if A[q] > x , then set r to q − 1
    else if (A[q] > x ) {
        return recursiveBinarySearch(A, p, q - 1, x);
    }
        
        //Step 2D - Otherwise (A[q] < x), set p to q + 1.
    else if(A[q] < x) {
        return recursiveBinarySearch(A, q + 1, r, x);
    }
    
    //Step 3 - Return NOT-FOUND.
    return NOT_FOUND;
    
}

int main () {

int A[10] = {1,2,3,4,5,6,7,8,9,10}; //Test Array A ranging from A[0]-A[9]

cout << recursiveBinarySearch(A,0,9,10) << endl; //Test example 


}



