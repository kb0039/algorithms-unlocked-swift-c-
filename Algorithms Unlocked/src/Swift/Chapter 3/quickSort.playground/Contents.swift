
func quickSort(A: inout[Int], p: Int, r: Int) {
    //Inputs:
    //    A : an array.
    //    p,r: starting and ending indicies of a subarray of A
 
    var q = Int()
    
    //Step 1 - If p≥r, ,then just return without doing anything.
    
    if (p>=r) {
        return
    }
    
    //Step 2 - Otherwise, do the following:
    
        // Step 2A - Call PARTITION (A , p , r ), and set q to its result.
        q = partition(A: &A, p: p, r: r)
    
        //Step 2B - Recursively call QUICKSORT (A, p, q−1).
        quickSort(A: &A, p: p, r: q-1)
    
        // Step 2C - Recursively call QUICKSORT (A, q+1, r).
        quickSort(A: &A, p: q+1, r: r)
}


func partition(A: inout [Int], p: Int, r: Int) -> Int {
    
    //Inputs:
    //    A : an array.
    // p,q,r: indicies into A. Each of the subarrays A[p..q] and A[q+1..r] is assumed to be already sorted
    
    //Step 1 - Set q to p.
    var q = p

    //Step 2 - For u = p to r − 1:
    for u in p...(r-1) {

        //Step 2A - If A [u] ≤ A [r] ,then swap A [q] with A [u] and then increment q.
        if (A[u] <= A[r]) {
            A.swapAt(q, u)
            q = q + 1
        }
     
    }
    
    //Step 3 - Swap A[q] with A[r] and then return q.
    A.swapAt(q, r)
    return q
}

var A = [9,7,5,11,12,2,14,3,10,6] //Test Array A ranging from A[0]-A[9]

quickSort(A: &A , p: 0, r: 9) //Test example merge sort (switch p = 1 to p = 0 for arrays);


