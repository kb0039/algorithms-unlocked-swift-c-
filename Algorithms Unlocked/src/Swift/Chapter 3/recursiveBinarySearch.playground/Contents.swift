func recursiveBinarySearch(A:[Int], p: Int, r: Int, x: Int) -> Int {
    
    //Inputs:
    //    A : an array.
    //    p,r : delineates the subarray A[p..r] under consideration
    //    x : the value being searched for
    
    let NOT_FOUND = -1 //Returns -1 when result is NULL or NILL
    
    //Step 1 - Set answer to NOT-FOUND.
    if (p > r) {
        return NOT_FOUND
    }
    
    //Step 2 - Otherwise (p ≤ r), do the following:
        
    //Step 2A - Set q to (p + r)/2.
    var q = (p+r)/2
    
    //Step 2B - If A[q] = x ,then return q.
    if (A[q] == x){
        return q
    }
        
        //Step 2C - Otherwise (A[q] ≠ x), if A[q] > x , then set r to q − 1
    else if (A[q] > x ) {
        return recursiveBinarySearch(A: A, p: p, r: q - 1,x: x)
    }
        
        //Step 2D - Otherwise (A[q] < x), set p to q + 1.
    else if(A[q] < x) {
        return recursiveBinarySearch(A: A, p: q + 1, r: r, x: x)
    }
    
    //Step 3 - Return NOT-FOUND.
    return NOT_FOUND
    
}

var A: [Int] = [1,2,3,4,5,6,7,8,9,10] //Test Array A ranging from A[0]-A[9]

recursiveBinarySearch(A: A, p: 0, r: 9, x: 10) //Test example 
