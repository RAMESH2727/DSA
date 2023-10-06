// Control Statements in C++
#include <iostream>
using namespace std;

int main() {
    // Conditional statements (if, if-else, else-if)
    int n;
    cout << "Enter a value for n: ";
    cin >> n;
    if (n > 5) {
        cout << "Entered number is greater than 5.";
    } else if (n == 0) {
        cout << "Entered number is zero.";
    } else {
        cout << "Entered number is smaller than 5.";
    }
    cout << endl;

    // Nested if statements
    int m;
    cout << "Enter a value for m: ";
    cin >> m;
    if (m > 10) {
        cout << "Entered number is greater than 10.";
        if (m % 2 == 0) {
            cout << " It is divisible by 2.";
        } else {
            cout << " It is not divisible by 2.";
        }
    } else {
        cout << "Entered number is smaller than or equal to 10.";
    }
    cout << endl;

    // Switch statements
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;
    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Out of range.";
            break;
    }
    cout << endl;

    // Jump statements (break, continue)
    cout << "Using continue in a loop: ";
    for (int i = 0; i < 10; i++) {
        if (i == 6) {
            continue;  // Skip printing 6
        }
        cout << i << " ";
    }
    cout << endl;

    cout << "Using break in a loop: ";
    for (int i = 0; i < 10; i++) {
        if (i == 6) {
            break;  // Exit the loop when i is 6
        }
        cout << i << " ";
    }
    cout << endl;

    // Conditional (Ternary) Operator
    int x = 10;
    int y = 20;
    int max_value = (x > y) ? x : y;
    cout << "Max value: " << max_value << endl;

    return 0;
}

/* Additional Notes:
- Control statements in C++ include conditional statements (if, if-else, else-if), nested if statements, switch statements, and jump statements.
- Nested if statements are used when we require another set of conditions inside existing conditions.
- Switch statements are useful when assigning names to specific numbers (e.g., days of the week).
- Jump operators include break and continue.
- continue: Used to skip the rest of the loop and continue with the next iteration.
- break: Used to exit a loop early based on a condition.
- Conditional (Ternary) Operator: It's a shorthand way to write an if-else statement.
  Syntax: condition ? value_if_true : value_if_false;
*/
