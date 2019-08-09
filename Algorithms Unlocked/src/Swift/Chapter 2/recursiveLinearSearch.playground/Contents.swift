func recursiveLinearSearch(A:[Int], n: Int, i: Int, x: Int) -> Int {
    
    //Inputs:
    //    A : an array.
    //    n : the number of elements in A to search through.
    //    i : increases in each of step 3’s recursive calls,
    //    x : the value being searched for
    
    let NOT_FOUND = -1 //Returns -1 when result is NULL or NILL
    
    //Step 1 - If i > n , then return NOT-FOUND.
    if (i > (n - 1)) {
        
    return NOT_FOUND
        
    //Step 2 - Otherwise ( i ≤ n ), if A [ i ] = x , then return i.
    } else if (A[i] == x) {
        
        return i
        
    }
    //Step 3 - Otherwise ( i ≤ n and A [ i ] ≠ x ), return recursiveLinearSearch(A , n , i + 1 , x).
    return recursiveLinearSearch(A: A, n: n , i: i + 1, x: x)
    
}


var A: [Int] = [1,2,3,4,5,6,7,8,9,10] //Test Array A ranging from A[0]-A[9]
recursiveLinearSearch(A: A, n: 10, i: 0, x: 10) //Test example

