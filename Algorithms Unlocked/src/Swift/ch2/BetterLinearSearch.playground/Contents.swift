func betterLinearSearch(A:[Int], n: Int, x: Int) -> Int {
    
    //Inputs:
    //    A : an array.
    //    n : the number of elements in A to search through.
    //    x : the value being searched for.
    
    let NOT_FOUND = -1 //Returns -1 when result is NULL or NILL

    //Step 1 - For i = 1 (array index begins at 0) to n : If A [i] = x , then return the value of i as the output.
    for i in 0...(n - 1) {
        
        //Step 1A - If A[i] = x , then return the value of i as the output.
        if (A[i] == x) {
            
            return i
            
        }
    }
    
   // Step 2 - Return NOT-FOUND as the output.
    return NOT_FOUND
}

var A: [Int] = [1,2,3,4,5,6,7,8,9,10] //Test Array A ranging from A[0]-A[9]

betterLinearSearch(A: A,n: 10, x: 10)// Test example


