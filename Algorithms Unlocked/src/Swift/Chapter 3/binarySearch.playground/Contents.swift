func binarySearch(A:[Int], n: Int, x: Int) -> Int {
    
    //Inputs:
    //    A : an array.
    //    n : the number of elements in A to search through.
    //    x : the value being searched for
    
    let NOT_FOUND = -1 //Returns -1 when result is NULL or NILL
    
    //Step 1 - Set answer to NOT-FOUND.
    var p = 0, r = n - 1 //indicies for subarrays
    
    
    //Step 2 - While p ≤ r , do the following:
    while(p<=r) {
        
        //Step 2A - Set q to (p + r)/2.
        var q = (p+r)/2
        
        //Step 2B - If A[q] = x ,then return q.
        if (A[q] == x){
            return q
        }
            
        //Step 2C - Otherwise (A[q] ≠ x), if A[q] > x , then set r to q − 1
        else if (A[q] > x ) {
            r = q - 1
        }
        
        //Step 2D - Otherwise (A[q] < x), set p to q + 1.
        else if(A[q] < x) {
            p = q + 1
        }

    }
    
    //Step 3 - Return NOT-FOUND.
    return NOT_FOUND
    
}

var A: [Int] = [1,2,3,4,5,6,7,8,9,10] //Test Array A ranging from A[0]-A[9]

binarySearch(A: A,n: 10,x: 10) //Test example

