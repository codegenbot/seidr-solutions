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
        int start = 0;
        for (int i = 0; i < input.size(); i++) {
            if (input[i] == ' ') {
                if (i - start >= 5) {
                    for (int j = i - 1; j >= start; j--) {
                        output += input[j];
                    }
                } else {
                    for (int j = start; j < i; j++) {
                        output += input[j];
                    }
                }
                output += ' ';
                start = i + 1;
            }
        }
        if (input.size() - start >= 5) {
            for (int j = input.size() - 1; j >= start; j--) {
                output += input[j];
            }
        } else {
            for (int j = start; j < input.size(); j++) {
                output += input[j];
            }
        }
        cout << output << endl;
    }
    return 0;
}
