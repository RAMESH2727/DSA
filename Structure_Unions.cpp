// Structure and Unions 
// C++ program to demonstrate the
// making of structure
#include <bits/stdc++.h>
using namespace std;

// Define structure
struct GFG {
	int G1;
	char G2;
	float G3;
};

// Driver Code
// main code 
int main()
{
	// Declaring a Structure
	struct GFG Geek;
    // In c++ programming we can use structure without using the keyword struct
    // But in c programming without using the struct keyword we can not use the structure datatype
	Geek.G1 = 85;
	Geek.G2 = 'G';
	Geek.G3 = 989.45;
	cout << "The value is : " << Geek.G1 << endl;
	cout << "The value is : " << Geek.G2 << endl;
	cout << "The value is : " << Geek.G3 << endl;


	return 0;
}


