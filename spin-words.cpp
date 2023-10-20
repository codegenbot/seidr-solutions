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
Given a string of one or more words (separated by spaces), reverse all of the words that are  or more letters long and return the resulting string.
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
    string line;
    while (getline(cin, line)) {
        int index = 0;
        int start = 0;
        int end = 0;
        while (index < line.size()) {
            while (line[index] != ' ' && index < line.size()) {
                index++;
            }
            end = index - 1;
            if (index - start >= 5) {
                while (start < end) {
                    swap(line[start++], line[end--]);
                }
            }
            start = index + 1;
            index++;
        }
        cout << line << endl;
    }
    return 0;
}
