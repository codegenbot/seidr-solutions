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
Given a string representing a Boolean expression consisting of T, F, |, and &, evaluate it and return the resulting Boolean.
For example,
input:
t
output:
True
input:
f
output:
False
input:
f&f
output:
False
input:
f&t
output:
False
input:
t&f
output:
False
*/

/*
The expression is evaluated from left to right without parentheses.

For AND and OR, there will be at least two operands with no more than two operations. I.e., the first character with index 1 is guaranteed to be a digit from t/f.

There will be no errors or exceptions, including the operands and operators are correct and the expression is fully evaluated. For example 1+2o3 is invalid.

You have to complete the defined function:
string solve(string s)

To give you a easy understanding of bool operator, note that

	1 == true
	0 == false
*/
bool solve(const string &s){
	if(s.size() == 1) return s[0] == 't';
	int i = s.size()-2, j = s.size()-1;
	while(1){
		if(s[i+1] == 't' && s[i] == '&') return solve(s.substr(0,i));
		if(s[i+1] == 'f' && s[i] == '&') return false;
		if(s[i+1] == 'f' && s[i] == '|') return solve(s.substr(0,i));
		if(s[i+1] == 't' && s[i] == '|') return true;
		i--;
	}
}

string wtf(string s){
	if(s.size() == 1 && s[0] == 't') return "True";
	int j = 0;
	string ret = "";
	while(j < s.size()){
		if(s[j] == 't' || s[j] == 'f') ret += s[j];
		if(s[j] == '&' || s[j] == '|'){
			ret += s[j++];
			ret += s[j];
			j = j+2;
			bool res = solve(ret);
			cout<<ret<<" : "<<res<<endl;
			if(solve(ret)) ret = string("t");
			else ret = string("f");
			if(j == s.size()) break;
			ret += s[j++];
		}
	}
	return ret;
}

int main() {
	cout<<wtf("t|f&f|t|t&t&f|t|t|t")<<endl;
	//cout<<wtf("f|f&f|t|t&t&f|t|t|t")<<endl;
}
