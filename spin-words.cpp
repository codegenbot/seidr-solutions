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
Given a string of one or more words (separated by spaces), reverse all of the words that are five or more letters long and return the resulting string.
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
        int index = 0;
        while (index < input.size()) {
            if (input[index] == ' ') {
                output += ' ';
                index++;
            }
            else {
                int j = index;
                while (j < input.size() && input[j] != ' ') {
                    j++;
                }
                if (j - index >= 5) {
                    for (int k = j - 1; k >= index; k--) {
                        output += input[k];
                    }
                }
                else {
                    for (int k = index; k < j; k++) {
                        output += input[k];
                    }
                }
                index = j;
            }
        }
        cout << output << endl;
    }
    return 0;
}
