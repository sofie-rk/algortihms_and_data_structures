#include <iostream>
using namespace std;

// Implement a stack that can contain integers using a
// singly linked list

// Algorithm takes in
// Line 1: 		the number of operations N
// Line 2...N+1:Either "PU X" or "PO"
// "PU X" means push the integer X on the stack
// "PO" means pop an element from the stack
// Output: for each pop operation in the input, outout the 
// integer that was popped at that time

// STACK
// Type of data structure
// Last in first out (LIFO)

// Linked list node
struct Node {
	int key;
	struct Node* next;
};


//------------------------------------------------------------------------------'
int main()
{
	// Algorithm takes in N number of operations N>0
	int N;
	cin >> N;

	// Top node
	struct Node* top;

	// Go through all of the opaerations
	for (int i=0; i<N; i++) {
		string operation;
		cin >> operation;
		
		// PUSH
		if (operation == "PU") {
			int value;
			cin >> value;

			struct Node* node;
			node = new Node();

			// Initialize node
			node->key = value;
			node->next = top;
			// Make node the top of stack
			top = node;
		}
		// POP
		else if (operation == "PO") {

			cout << top->key << endl;
			
			// Assign second node to top
			top = top->next;
		}
	}
}

//------------------------------------------------------------------------------
