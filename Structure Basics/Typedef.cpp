// Typedef - keyword that is used to assign a new name to any existing data-type

// C++ program to demonstrate the use
// of struct using typedef
#include <bits/stdc++.h>
using namespace std;

// Declaration of typedef
typedef struct GeekForGeeks
{

    int G1;
    char G2;
    float G3;

} GFG;
/*
Here, typedef struct ..... GFG means that
we can create new struct variables by just writing
"GFG <variable_name>"
*/

// Driver Code
int main()
{
    // struct variable created by using "GFG <variable_name>"
    GFG Geek;
    Geek.G1 = 85;
    Geek.G2 = 'G';
    Geek.G3 = 989.45;

    cout << "The value is : " << Geek.G1 << endl;
    cout << "The value is : " << Geek.G2 << endl;
    cout << "The value is : " << Geek.G3 << endl;
    return 0;
}
