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
	string str;
	while(getline(cin, str)) {
		string res = "";
		for(size_t i = 0; i < str.size(); i++) {
			string word = "";
			while(i < str.size() && str[i] != ' ') {
				word.push_back(str[i]);
				i++;
			}
			if(word.size() >= 5) {
				reverse(word.begin(), word.end());
			}
			res += word;
			res.push_back(' ');
		}
		res = res.substr(0, res.size() - 1);
		cout << res << endl;
	}
	return 0;
}
