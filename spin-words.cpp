// https://leetcode.com/problems/reverse-words-in-a-string
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
Given a string of one or more words (separated by spaces), reverse all of the words that are ﬁve or more letters long and return the resulting string. For example,
Input:
this is a test
Output:
this is a test

Input:
a
Output:
a

Input:
this is a test
Output:
this is a test

Input:
this is another test
Output:
this is rehtona test

Input:
hi
Output:
hi
*/
void reverseI(string &s){
	int i = 0, j = s.size() - 1;
	while(i < j){
		swap(s[i++], s[j--]);
	}
}
int main() {
    string s;
    while(getline(cin, s)){
        vector<string> strs;
		int i = 0;
		while(i < s.size()){
			while(i < s.size() && s[i] == ' ')i++;
			int curr = i;
			while(i < s.size() && s[i] != ' ')i++;
			if(i > curr)strs.push_back(s.substr(curr, i-curr));
        }
		for(int i = 0; i < strs.size(); i++){
			if(strs[i].size()>=5)reverseI(strs[i]);
			if(i != 0)cout << ' ';
			cout << strs[i];
		}
    }
    return 0;
}
