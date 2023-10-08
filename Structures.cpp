/*
Structure is a user-defined data type. Structures are used to 
combine various heterogeneous data types in a single data structure.
*/
#include <bits/stdc++.h>
using namespace std;

// Define structure
struct GFG
{
	int G1;
	char G2;
	float G3;
};

// Driver Code
int main()
{
	// When we declare a variable of the structure we need to write the 
	// keyword “struct"in C language but for C++ the keyword is not mandatory

	// Declaring a Structure
	struct GFG Geek;
	Geek.G1 = 85;
	Geek.G2 = 'G';
	Geek.G3 = 989.45;
	cout << "The value is : " << Geek.G1 << endl;
	cout << "The value is : " << Geek.G2 << endl;
	cout << "The value is : " << Geek.G3 << endl;
	return 0;
}