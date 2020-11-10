
func mergeSort(A: inout[Int], p: Int, r: Int) {
    //Inputs:
    //    A : an array.
    //    p,r: starting and ending indicies of a subarray of A
 
    var q = Int()
    
    //Step 1 - If p≥r, then the subarray has at most one element, and so it is already sorted. Just return without doing anything.
    
    if (p>=r) {
        return
    }
    
    //Step 2 - Otherwise, do the following:
    
        // Step 2A - Set q to (p+r)/2
        q = (p+r)/2
    
        // Step 2B - RECURSIVELY call MERGE-SORT(A,p,q)
        mergeSort(A: &A, p: p, r: q)
    
        //Step 2B - RECURSIVELY call MERGE-SORT(A,q+1,r)
        mergeSort(A: &A, p: q+1, r: r)
    
        // Step 2B - Call MERGE(A,p,q,r)
        merge(A: &A, p: p, q: q, r: r)
}


func merge(A: inout [Int], p: Int, q: Int, r: Int) {
    
    //Inputs:
    //    A : an array.
    // p,q,r: indicies into A. Each of the subarrays A[p..q] and A[q+1..r] is assumed to be already sorted
    
    //Step 1 - Set n1 to q-p+1, and set n2 to r-q
    
    let n1 = q-p+1, n2 = r-q
    
    //Step 2 - Let B[1...n1+1] and C[1..n2+1] be new arrays.
    var B: [Int] = [Int](), C = [Int]()
    
    //Step 3 - Copy A[p..q] into B[1..n1], and copy A [q+1..r] into C[1..n2].
    B = Array(A[p...q])
    C = Array(A[q+1...r])
    
    //Step 4 - Set both B[n1+1] and C[n2+1] to ∞ (largest value for integers is Int.max(-2^(16)->2^(16)-1)).
    B.insert(Int.max, at: n1)
    C.insert(Int.max, at: n2)

    //Step 5 - Set both i and j to 1 (set both i,j to 0 for arrays).
    var i = 0, j = 0

    //Step 6 - For k = p to r:
    for k in p...r {

        //Step 6A - If B[i] ≤ C[j], then set A[k] to B[i] and increment i.
        if (B[i] <= C[j]) {
            A[k] = B[i]
            i = i + 1
        }
        //Step 6B - Otherwise (B[i]>C[j]), set A[k] to C[j] and increment j.
        else if (B[i] > C[j]) {
            A[k] = C[j]
            j = j + 1
        }
     
    }
    
    
}

var A = [12,9,3,7,14,11,6,2,10,5] //Test Array A ranging from A[0]-A[9]

mergeSort(A: &A , p: 0, r: 9) //Test example merge sort (switch p = 1 to p = 0 for arrays);


