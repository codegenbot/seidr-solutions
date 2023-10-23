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
string mid(string s) {
	int len = s.length();
	if (len % 2 == 0) {
		return s.substr(len / 2 - 1, 2);
	} else {
		return s.substr(len / 2, 1);
	}
}
int main() {
	cout << mid(Q) << endl;
	cout << mid(Q) << endl;
	cout << mid(Q) << endl;
	cout << mid(Q) << endl;
	cout << mid(Q) << endl;
	return 0;
}
