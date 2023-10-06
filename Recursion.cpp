// Recursion: A function calling itself is known as Recursion.

// Example: Calculating Factorial using Recursion
int factorial(int n) {
    // Base case: factorial of 0 and 1 is 1
    if (n <= 1)
        return 1;
    // Recursive case: n! = n * (n-1)!
    else
        return n * factorial(n - 1);
}


/*
Working of the program
For Example : n = 5
Step 1 : factorial = 5 * factorial(4)
Step 2 : factorial = 5 * 4 * factorial(3)
Step 3 : factorial = 5 * 4 * 3 * factorial(2)
Step 4 : factorial = 5 * 4 * 3 * 2 * factorial(1)
here n = 1 so the base condition satisfied here so it will stop itself here
 
*/

// Example: Calculating Sum of Numbers up to n using Recursion
int sum(int n) {
    // Base case: sum of first n natural numbers is 0 for n = 0
    if (n == 0)
        return 0;
    // Recursive case: sum(n) = n + sum(n-1)
    else
        return n + sum(n - 1);
}

#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;

    // Factorial Example
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;

    // Sum Example
    cout << "Enter a number to calculate the sum up to that number: ";
    cin >> num;
    cout << "Sum of numbers up to " << num << " is: " << sum(num) << endl;

    return 0;
}

/*
Additional Notes 
Recursion:

A function calls itself during its execution.
Recursive functions break down a problem into simpler, similar subproblems.
Base Case:

The termination condition that stops the recursive calls.
In the factorial example, the base case is when n is less than or equal to 1.
Recursive Case:

The case where the function calls itself with a smaller instance of the problem.
In the factorial example, the recursive case is n * factorial(n - 1).
Recursion Stack:

Mechanism by which recursive calls are managed and resolved.
Each recursive call adds a new frame to the call stack.
Tail Recursion:

A type of recursion where the recursive call is the last thing executed by the function.
Indirect Recursion:

A type of recursion where function A calls function B, and function B calls function A (either directly or indirectly).
*/