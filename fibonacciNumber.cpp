//============================================================================
// Name        : fibonacciNumber.cpp
// Author      : CrimsonFlame1
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	
	long long n, t1=0, t2=0, nextTerm=0;
	cout << "Enter number of terms: " << flush;
	cin >> n;
	
	for(int i=1; i<=n; i++) {
		if(t1 == t2) {
			cout << nextTerm << ",";
			t1++, t2++;
			cout << t1 << "," << t2 << ",";
		}
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		
		cout << nextTerm << ",";
	}
	
	
	return 0;
}
