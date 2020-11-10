#include <iostream>

using namespace std;

int badFactorial(int n) {
    
    //Inputs:
    //     n: An integer n ≥ 0.
    
    //Step 1 - If n = 0, then return 1 as the output.
    if (n==0) {
        return 1;
    }
    // Step 2 - Otherwise, return BAD-FACTORIAL(n + 1)/( n + 1).
    return badFactorial(n + 1)/(n + 1);
    
}

int main() {

cout << badFactorial(10) << endl; //Test example

}
