#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given a string, return the middle character as a string if it is odd length; return the two middle characters as a string if it is even length.
For example,
input:
Q
output:
Q
input:
 
output:
 
input:
$
output:
$
input:
E9
output:
E9
input:
)b
output:
)b
*/

string getMiddle(string s) {
	if (s.length() % 2 == 0) {
		return s.substr(s.length() / 2 - 1, 2);
	}
	else {
		return s.substr(s.length() / 2, 1);
	}
}

int main() {
	cout << getMiddle("Q") << endl;
	cout << getMiddle("") << endl;
	cout << getMiddle("$") << endl;
	cout << getMiddle("E9") << endl;
	cout << getMiddle(")b") << endl;
	cout << getMiddle("asdfghjkl") << endl;
	cout << getMiddle("asdfghjk") << endl;
	cout << getMiddle("asdfg") << endl;
	cout << getMiddle("asdf") << endl;
	return 0;
}
