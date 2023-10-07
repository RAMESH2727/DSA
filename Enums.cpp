/*
Enums is nothing but assigning a number
to each member of an instance of enum
*/

#include <bits/stdc++.h>
using namespace std;

// Defining  an enum
enum GeeksforGeeks
{
    Geek1,
    Geek2,
    Geek3
};

// Creating instances of enum GeeksforGeeks
// and assigning them some member of enum
GeeksforGeeks G1 = Geek1;
GeeksforGeeks G2 = Geek2;
GeeksforGeeks G3 = Geek3;

// starts from 0 and progresses by +1
// for the defined enum in order
int main()
{
    cout << "The numerical value assigned to Geek1 : " << G1 << endl;
    cout << "The numerical value assigned to Geek2 : " << G2 << endl;
    cout << "The numerical value assigned to Geek3 : " << G3 << endl;

    return 0;
}