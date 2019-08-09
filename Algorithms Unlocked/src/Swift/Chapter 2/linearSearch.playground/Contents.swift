func linearSearch(A:[Int], n: Int, x: Int) -> Int {
    
    //Inputs:
    //    A : an array.
    //    n : the number of elements in A to search through.
    //    x : the value being searched for
    
    let NOT_FOUND = -1 //Returns -1 when result is NULL or NILL
    
    //Step 1 - Set answer to NOT-FOUND.
    var answer = NOT_FOUND
    
    //Step 2 - For each index i , going from 1 (array index begin at 0) to n , in order:
    for i in 0...(n-1) {
        
        //Step 2A - If A [i] = x , then set answer to the value of i.
        if (A[i] == x) {
            answer = i
        }
    }
    
    //Step 3 - Return the value of answer as the output.
    return answer
    
}
var A: [Int] = [1,2,3,4,5,6,7,8,9,10] //Test Array A ranging from A[0]-A[9]
linearSearch(A: A,n: 9,x: 0) //Test example
