// Heap memory puzzle 3

#include <iostream>

using namespace std;

int main() {
	int *p, *q;
	p = new int; //p in stack pointing to element in heap
	q = p; 
	*q = 8; // pointer q's element in stack
	cout << *p << endl; //random value bcs we haven't init

	q = new int; //q in stack pointing to element in heap
	*q = 9; //pointer q's element in heap
	cout << *p << endl; //
	cout << *q << endl;

	return 0;
}