func factorial(n: Int) -> Int {
    
    //Inputs:
    //     n: An integer n ≥ 0.
    
    //Step 1 - If n = 0, then return 1 as the output.
    if (n==0) {
        return 1
    }
    //Step 2 - Otherwise, return n * FACTORIAL(n-1).
    return n * factorial(n: n - 1)
    
}

factorial(n:10) //Test example

