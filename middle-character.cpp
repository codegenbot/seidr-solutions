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
string mid(string str) {
	int n = str.length();
	if (n % 2 == 0) {
		int div = n / 2;
		return str.substr(div - 1, 2);
	} else {
		int div = n / 2 + 1;
		return str.substr(div - 1, 1);
	}
	return 0;
}

int main() {
	string str;
	cin >> str;
	cout << mid(str) << endl;
	return 0;
}
