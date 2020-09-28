// heap memory Puzzle 1

#include <iostream>
using namespace std;


int main() {
	int i = 2; int *p = &i;
	int j = 4; int *q = &j;
	int k = 8; int *r = &k;

	k = i;
	cout << i << j << k << *p << *q << *r << endl;
	// 242242

	p = q;
	cout << i << j << k << *p << *q << *r << endl;
	//242442

	*q = *r;
	cout << i << j << k << *p << *q << *r << endl;
	//222222
	
	return 0;
}