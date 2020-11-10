#include <iostream>

using namespace std;


int partition(int A[], int p, int r) {
    
    //Inputs:
    //    A : an array.
    // p,q,r: indicies into A. Each of the subarrays A[p..q] and A[q+1..r] is assumed to be already sorted
    
    //Step 1 - Set q to p.
    int q = p;

    //Step 2 - For u = p to r − 1:
    for (int u = p; u <= (r-1); u++) {
        //Step 2A - If A [u] ≤ A [r] ,then swap A [q] with A [u] and then increment q.
        if (A[u] <= A[r]) {
            swap(A[q],A[u]);
            q++;
        }
     
    }
    
    //Step 3 - Swap A[q] with A[r] and then return q.
    swap(A[q], A[r]);
    return q;

}


void quickSort(int A[],int p, int r) {
    //Inputs:
    //    A : an array.
    //    p,r: starting and ending indicies of a subarray of A
 
    int q;
    
    //Step 1 - If p≥r, ,then just return without doing anything.
    
    if (p>=r) {
        return;
    }
    
    //Step 2 - Otherwise, do the following:
    
        // Step 2A - Call PARTITION (A , p , r ), and set q to its result.
        q = partition(A,p,r);
    
        //Step 2B - Recursively call QUICKSORT (A, p, q−1).
        quickSort(A,p,q-1);
    
        // Step 2C - Recursively call QUICKSORT (A, q+1, r).
        quickSort(A,q+1,r);
}


void printArray(int * A, int length) {
    
    for (int i = 0; i < length; i++) {
        
        cout <<  A[i] << endl;
        
    }
    
}


int main (){
    
    int A[] = {9,7,5,11,12,2,14,3,10,6}; //Test Array A ranging from A[0]-A[9]
    
    int n = sizeof(A)/sizeof(A[0]); //Test array length
    
    quickSort(A,0,n-1); //Test example
    
    printArray(A,n); //Test print sorted array
    
}



