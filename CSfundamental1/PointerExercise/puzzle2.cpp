// heap memory puzzle 2

#include <iostream>

using namespace std;

int main() {

	int *x = new int;
	int &y = *x; //aliases
	y = 4;

	cout << &x << endl; // address in stack
	cout << x << endl; // address in heap
	cout << *x << endl; // 4

	cout << &y << endl; // address in heap
	cout << y << endl; // element
	//cout << *y << endl; // address

	return 0;
}