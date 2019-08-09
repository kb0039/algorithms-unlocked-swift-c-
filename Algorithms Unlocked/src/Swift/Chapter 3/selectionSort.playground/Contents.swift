func selectionSort(A:inout [Int], n: Int) {
    
    //Inputs:
    //    A : an array.
    //    n : the number of elements in A to sort.
    
    var smallest = Int() // initialize smallest index variable for subarray
    
    //Step 1 - For i = 1 to n - 1 -> (adjust outer for-loop for Array A to For i = 0 to n - 1)
    
    for i in 0...(n-1) {
        //Step 1A - Set smallest to i:
        smallest = i
        
        //Step 1B: For j = i + 1 to n: -> (adjust inner for-loop Array A to For j = (i+1) to n)
        for j in (i+1)...(n) {
            //Step 1B-i - If A[j] < A[smallest], then set smallest to j
            
            //print("\(A[j])   \(A[smallest])  \((A[j])<(A[smallest]))   \(A[i])" ) //truth table (optional)
        
            if (A[j] < A[smallest]) {
                smallest = j
            }
            
        }
        
        //Step 1C - Swap A[i] with A[smallest]
        A.swapAt(i, smallest)
        
    }
    
}

var A: [Int] = [12,9,3,7,14,11] //Test Array A ranging from A[0]-A[9]

selectionSort(A: &A, n: 5) //Test example

