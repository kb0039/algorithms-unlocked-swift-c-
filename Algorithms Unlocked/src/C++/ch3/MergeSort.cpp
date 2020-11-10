#include <iostream>

using namespace std;

void merge(int A[], int p, int q, int r) {
    
    //Inputs:
    //    A : an array.
    // p,q,r: indicies into A. Each of the subarrays A[p..q] and A[q+1..r] is assumed to be already sorted
    
    //Step 1 - Set n1 to q-p+1, and set n2 to r-q
    
    int n1 = q-p+1, n2 = r-q;
    
    //Step 2 - Let B[1...n1+1] and C[1..n2+1] be new arrays.
    int B[n1], C[n2];
    
    //Step 3 - Copy A[p..q] into B[1..n1], and copy A [q+1..r] into C[1..n2].
    
    for (int i = 0; i < n1; i++) {
        
        B[i] = A[p+i];
        
    }
    
    
    for (int i = 0; i < n2; i++) {
        
        C[i] = A[q+1+i];
        
    }
    
    //Step 4 - Set both B[n1+1] and C[n2+1] to ∞ (largest value for integers is Int.max(-2^(16)->2^(16)-1)).
    B[n1] = INT_MAX;
    C[n2] = INT_MAX;
    
    //Step 5 - Set both i and j to 1 (set both i,j to 0 for arrays).
    int i = 0, j = 0;
    
    //Step 6 - For k = p to r:
    for (int k = p; k <= r; k++) {
        
        //Step 6A - If B[i] ≤ C[j], then set A[k] to B[i] and increment i.
        if (B[i] <= C[j]) {
            A[k] = B[i];
            i++;
        }
        //Step 6B - Otherwise (B[i]>C[j]), set A[k] to C[j] and increment j.
        else if (B[i] > C[j]) {
            A[k] = C[j];
            j++;
        }
        
        
    }
    
    
}


void mergeSort(int A[], int p, int r) {
    //Inputs:
    //    A : an array.
    //    p,r: starting and ending indicies of a subarray of A
    
    int q;
    
    //Step 1 - If p≥r, then the subarray has at most one element, and so it is already sorted. Just return without doing anything.
    
    if (p>=r) {
        return;
    }
    
    //Step 2 - Otherwise, do the following:
    
    // Step 2A - Set q to (p+r)/2
    q = (p+r)/2;
    
    // Step 2B - RECURSIVELY call MERGE-SORT(A,p,q)
    mergeSort(A,p,q);
    
    //Step 2B - RECURSIVELY call MERGE-SORT(A,q+1,r)
    mergeSort(A,q+1,r);
    
    // Step 2B - Call MERGE(A,p,q,r);
    merge(A,p,q,r);
}

void printArray(int * A, int length) {
    
    for (int i = 0; i < length; i++) {
        
        cout <<  A[i] << endl;
        
    }
    
}


int main (){
    
    int A[] = {12,9,3,7,14,11,6,2,10,5}; //Test Array A ranging from A[0]-A[9]
    
    int n = sizeof(A)/sizeof(A[0]); //Test array length
    
    mergeSort(A,0,n-1); //Test example
    
    printArray(A,n); //Test print sorted array
    
}
