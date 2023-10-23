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
        string output = "";
        for(int i = 0; i < input.length(); i++) {
            string word = "";
            while(i < input.length() && input[i] != ' ') {
                word += input[i];
                i++;
            }
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            output += word;
            if (i < input.length()) {
                output += " ";
            }
        }
        cout << output << endl;
    }
    return 0;
}
