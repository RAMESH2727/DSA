// Tokens in C++

// Types of Tokens:
// 1. Keywords (32)
// 2. Identifiers
// 3. Constants
// 4. Strings
// 5. Special Symbols
// 6. Operators (Unary, Binary, Ternary)

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Identifiers
    int variable = 42;
    double pi = 3.14;
    char letter = 'A';
    
    // Constants
    const int max_value = 100;
    const double gravity = 9.81;
    
    // Strings
    string greeting = "Hello, world!";
    
    // Special Symbols
    int arr[5];  // Brackets []
    int value = (3 + 5);  // Parentheses ()
    int num = 10;  // Semicolon ;
    
    // Operators
    int x = 5, y = 3;
    int sum = x + y;  // Binary operator (+)
    int negation = -x;  // Unary operator (-)
    
    // Ternary operator
    int max_value = (x > y) ? x : y;

    return 0;
}

/* Additional Notes:
- Keywords: Reserved words in C++ that have special meaning and cannot be used as identifiers.
- Identifiers: Names given to various program elements such as variables, functions, etc. They are case-sensitive.
- Constants: Variables with fixed values that cannot be modified during program execution.
- Strings: Arrays of characters used to represent text.
- Special Symbols: Characters with special meanings in the C++ language, used for various purposes like defining arrays, operators, etc.
- Operators: Symbols that perform operations on operands. Types include unary, binary, and ternary operators.

Examples:
1. Keywords: int, double, char, if, else, while, class, return, etc.
2. Identifiers: variable, pi, letter, max_value, gravity, greeting, arr, value, num, sum, negation, max_value.
3. Constants: const int max_value = 100; const double gravity = 9.81;
4. Strings: string greeting = "Hello, world!";
5. Special Symbols: int arr[5]; int value = (3 + 5); int num = 10;
6. Operators: int sum = x + y; int negation = -x; int max_value = (x > y) ? x : y;
*/
