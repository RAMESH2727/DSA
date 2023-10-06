// Functions in C++ Programming Language

// 1. Normal Function
// Syntax: <return_type> function_name(parameters)
// Example: Maximum of two numbers
int max(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

// 2. Function Prototype
// When the function is defined below the main function, a function prototype is used.
// Syntax: <return_type> function_name(arguments)

// 3. Sum Function
int sum(int a, int b);    // Function prototype

#include<bits/stdc++.h>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;

    // Calling the max function
    int m = max(num1, num2);
    cout << "Maximum: " << m << endl;

    // Calling the sum function
    cout << "Sum of Numbers: " << sum(num1, num2) << endl;
}

// Definition of sum function
int sum(int a, int b) {
    int c = a + b;
    return c; 
}
