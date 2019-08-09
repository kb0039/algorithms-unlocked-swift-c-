#include <iostream>
using namespace std;

int recursiveLinearSearch(int *A, int n, int i, int x){
    
    //Inputs:
    //    A : an array.
    //    n : the number of elements in A to search through.
    //    i : increases in each of step 3’s recursive calls,
    //    x : the value being searched for
    

    int NOT_FOUND = -1; //Returns -1 when result is NULL or NILL
    
    //Step 1 - If i > n , then return NOT-FOUND.
    if (i > (n - 1)) {
        
        return NOT_FOUND;
        
    //Step 2 - Otherwise ( i ≤ n ), if A [ i ] = x , then return i.
    } else if (A[i] == x) {
        
        return i;
        
    }
    
    //Step 3 - Otherwise ( i ≤ n and A [ i ] ≠ x ), return recursiveLinearSearch(A , n , i + 1 , x).
    return recursiveLinearSearch(A,n,i+1,x);

}

int main () {
    
    int A[10] =  {1,2,3,4,5,6,7,8,9,10}; //Test Array A ranging from A[0]-A[9]
    cout << recursiveLinearSearch(A, 10, 0, 10) << endl; //Test example
    
}
