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
#include <algorithm>
using namespace std;
/*
Given a string of one or more words (separated by spaces), reverse all of the words that are ﬁve or more letters long and return the resulting string.
For example,
input:

output:

input:
a
output:
a
input:
this is a test
output:
this is a test
input:
this is another test
output:
this is rehtona test
input:
hi
output:
hi
*/
int main() {
	string s;
	getline(cin, s);
	int start = 0, len = s.length();

	for (int i = 1; i < len; i++) {
		if (s[i] != ' ' || s[start] == ' ') {
			continue;
		} else {
			if (i - start > 5) {
				// reverse
				for (int j = start; j < start + (i - start)/2; j++) {
					swap(s[j], s[i - j + start - 1]);
				}
			} else start = i + 1;
		}
	}
	cout<<s;
	return 0;

}
