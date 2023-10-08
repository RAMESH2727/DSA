/*
A union stores one member at a time in a shared memory
location, using space only for the largest member.
*/
#include <iostream>
using namespace std;

// Defining a Union
union GFG
{
    int Geek1;
    char Geek2;
    // sizeof(int) = 4, sizeof(char) = 1
    // thus, sizeof(GFG) = sizeof(max) = 4
    // where max => member with maximum size = int
};

// Driver Code
int main()
{
    // Initializing Union
    union GFG G1;

    G1.Geek1 = 34;
    G1.Geek2 = 'F';

    // Printing values
    cout << "Geek1: " << G1.Geek1 << endl;
    cout << "Geek2: " << G1.Geek2 << endl;

    /*
    Here we notice that Geek1 is replaced by ASCII value of Geek2,
    this is because Geek2 was the last initialized value which overwrites
    the previous value stored in Geek1.
    */

    return 0;
}
