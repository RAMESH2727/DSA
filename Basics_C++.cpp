// Basics of C++ Programming
#include <iostream>  // Standard C++ I/O Library

using namespace std;  // Using the standard namespace
    // Functions
    int sum(int a, int b){
        return a + b;
    }


int main() {
    // Printing messages to the console
    cout << "Hello world in C++" << endl;
    cout << "Hello everyone! I am Ramesh" << endl;

    // Explanation about the code
    // The above lines use the cout object to display messages.
    // << is the insertion operator used with cout for output.
    // endl inserts a newline character after printing.
    // cout is part of the standard namespace std.

    // Variables and Data Types
    int age = 25;  // Integer variable
    double pi = 3.14;  // Double variable
    char grade = 'A';  // Character variable
    bool isCplusplusFun = true;  // Boolean variable

    // Input from the user
    cout << "Enter your age: ";
    cin >> age;

    // Conditionals
    if (age >= 18) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a minor." << endl;
    }

    // Loops
    for (int i = 1; i <= 5; i++) {
        cout << "Count: " << i << endl;
    }


    cout << "Sum of 5 and 3 is: " << sum(5, 3) << endl;

    return 0;
}

/* Additional Notes:
- Almost every C programming code works on a C++ compiler.
- cout is used for displaying or showing output.
- cin is used for taking input.
- We can also use printf and scanf in C++ programming.
- iostream (library) provides input and output functionalities.
- The statement "using namespace std;" allows us to use cout without specifying std::cout.
- We can also use the master library "#include <bits/stdc++.h>" which includes all the standard libraries in C++.

Concepts Covered:
1. Printing to console
2. Variables and Data Types
3. User Input
4. Conditionals (if-else)
5. Loops (for)
6. Functions
*/
