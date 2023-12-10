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
    string input;
    cin >> input;
    vector<string> words = split(input, ' ');
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            reverse(words[i]);
        }
    }
    string output = join(words, ' ');
    cout << output << endl;
    return 0;
}
string split(const string& s, char delimiter) {
    vector<string> words;
    size_t start = 0;
    size_t end = s.find(delimiter);
    while (end != string::npos) {
        words.push_back(s.substr(start, end - start));
        start = end + 1;
        end = s.find(delimiter, start);
    }
    if (start < s.length()) {
        words.push_back(s.substr(start));
    }
    return words;
}
string join(const vector<string>& words, char delimiter) {
    string output;
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            output += delimiter;
        }
        output += words[i];
    }
    return output;
}