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

/*
Note:
reverse function is not easy to use, need to understand the parameter position.
*/
int main() {
    string str;
    bool start = false;
    while(getline(cin, str)) {
        string output;
        int tail = 0, length = str.size();
        for(int i = 0; i < length; i++) {
            if(str[i] == ' ') {
                if(i - tail >= 5) {
                    reverse(str.begin() + tail, str.begin() + i);
                }
                tail = i+1;
            }
        }
        if(length - tail >= 5) {
            reverse(str.begin() + tail, str.end());
        }
        cout << str << endl;
    }
    return 0;
}
