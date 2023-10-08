/*
Structure is a user-defined data type. Structures are used to
combine various heterogeneous data types in a single data structure.
*/
#include <bits/stdc++.h>
using namespace std;

/*
	Self Referential Structures -
	Have one or more pointers which point to the
	same type of structure, as their member.

	Types of Self Referential Structures:

	1. Self Referential Structure with Single Link - eg. Singly
	2. Self Referential Structure with Multiple Links - eg, Doubly

	Applications of Referential Structures -
	Creation of complex data structures like Linked Lists, Stacks, Queues, Trees, Graphs, etc.
*/

// Define structure
struct GFG
{
	/*
	Structures in C++ can contain two types of members -

		1. Data Member: Normal C++ variables of different data types.

		2. Member Functions: Normal C++ functions, we can also include functions inside a structure declaration.
	*/

	int G1;
	char G2;
	float G3;
	// Here, GFG is a self referential structure
	// and 'next' is a referencing pointer to it.
	struct node *next;
};

// Driver Code
int main()
{
	// When we declare a variable of the structure we need to write the
	// keyword “struct"in C language but for C++ the keyword is not mandatory

	// Declaring a Structure
	struct GFG Geek;

	// Structure members can be accessed using dot (.) operator or via structure pointers using arrow (->) operator.

	// Here, structure members are accessed using dot (.) operator.
	Geek.G1 = 85;
	Geek.G2 = 'G';
	Geek.G3 = 989.45;
	cout << "The value of G1 is : " << Geek.G1 << endl;
	cout << "The value of G2 is : " << Geek.G2 << endl;
	cout << "The value of G3 is : " << Geek.G3 << endl;

	// We can also create an array of structures
	struct GFG arr[2];

	// Access array members
	arr[0].G1 = 10;
	arr[1].G1 = 20;

	// We can have pointer to a structure.
	// Structure pointer -
	// points to the address of the memory block that stores the structure.
	struct GFG *ptr = arr;

	// Here, structure members are accessed via structure pointer using arrow (->) operator.
	cout << "The value of G1 at arr[0] is : " << ptr++->G1 << endl;
	// ptr initially points at arr's first element, i.e., arr[0]
	// ptr++ moves the pointer to the next element of arr, i.e., arr[1]
	cout << "The value of G1 at arr[1] is : " << ptr->G1 << endl;
	return 0;

	// Difference between structures and classes -
	// (Most important difference - hiding implementation details)l
	// https://www.geeksforgeeks.org/structure-vs-class-in-cpp/

	// C Structures vs C++ 
	// https://www.geeksforgeeks.org/difference-c-structures-c-structures/
	
}