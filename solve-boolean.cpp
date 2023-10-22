#include<string>
#include<cstdlib>
#include<cstdio>
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

bool bitwiseor(bool a, bool b) {
	return a || b;
}
bool bitwiseand(bool a, bool b) {
	return a && b;
}

bool evaluate(char c) {
	if (c == 'T') return true;
	return false;
}

int main() {
	string input;
	char op;
	cin >> input;
	bool a = evaluate(input[0]);
	bool b = evaluate(input[2]);
	op = input[1];
	if (op == '|') {
		cout << bitwiseor(a, b);
	}
	else {
		cout << bitwiseand(a, b);
	}

	return 0;
}
