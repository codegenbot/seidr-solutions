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
This problem gives a string. The program must return a string that contains the same characters as the input string, except that all occurrences of two consecutive new lines are replaced by a single new line.
For example, input:
This is a test
This is a test
This is a test
output:
This is a test
This is a test
This is a test
input:
This is a test
output:
This is a test
input:
This is a test
This is a test
output:
This is a test
This is a test
input:
This is a test
This is a test
This is a test
output:
This is a test
This is a test
This is a test
*/
int main() {
	string s;
	getline(cin, s);
	string o;
	for (int i = 0; i < s.length(); i++) {
		o += s[i];
		if (s[i] == '\n') {
			if (i + 1 < s.length() && s[i + 1] == '\n') {
				o.pop_back();
				o += ' ';
			}
		}
		else if (s[i] == ' ') {
			o.pop_back();
			o += ' ';
		}
	}
	cout << o << endl;
}
