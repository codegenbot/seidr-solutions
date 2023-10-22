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
    while (getline(cin, input)) {
        string output;
        string word;
        for (int i = 0; i < input.length(); i++) {
            if (input[i] != ' ') {
                word += input[i];
            } else {
                if (word.length() >= 5) {
                    reverse(word.begin(), word.end());
                }
                output += word;
                output += ' ';
                word = "";
            }
        }
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        output += word;
        cout << output << endl;
    }
    return 0;
}
