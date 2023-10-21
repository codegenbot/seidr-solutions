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
Given a string representing a tweet, validate whether the tweet meets Twitter’s original character requirements. 
If the tweet has more than 140 characters, return the string "Too many characters". 
If the tweet is empty, return the string "You didn't type anything". 
Otherwise, return "Your tweet has X characters", where the X is the number of characters in the tweet.
*/
int main() {
	string s;
	getline(cin, s);
	if (s.length() > 140) {
		cout << "Too many characters" << endl;
	}
	else if (s.length() == 0) {
		cout << "You didn't type anything" << endl;
	}
	else {
		cout << "Your tweet has " << s.length() << " characters" << endl;
	}
	return 0;
}
