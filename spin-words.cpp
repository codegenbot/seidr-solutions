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
this is a etsat
input:
this is another test
output:
this is rehtona test
input:
this is I am so bored so I I I went out and I'm pranking people
output:
this is yMa os robde os yM yM yM went ta na yMm nekrap geiple
input:
this is I am so bored so I I I went out and I'm pranking people
output:
this is yMa os robde os yM yM yM went ta na yMm nekrap geiple
input:
this is I am so bored so I I I went I'm pranking people
output:
this is yMa os robde os yM yM yM went yMm nekrap geiple
input:
hi
output:
hi
*/

// a is a test
// a is etsat this is a words with
// "a" "is" "a" "test"
// i is pointer to start
/*
 "this is a words with is words"
 - record start space Location
 - record current len
 - when current len is greater than 5, then reverse all range + start to current (i),
 - difference btw this first version and second are
   1. you need to make sure that i is not from begin pos, then need to i-1 instead of i
   2. just return directly
 */
string reverseWords(string str) {
    int start = 0;
    int end = 0;
    int len = str.size();
    int wordLen = 0;
    if (len <= 1) return str;
    int i = 1;
    while (i < len) {
        if (str[i] == ' ') {
            start = i + 1;
            wordLen = 0;
        } else {
            wordLen++;
            if (wordLen >= 5) {
                end = i;
                int j = start;
                int k = end;
                while (j < k) {
                    swap(str[j++], str[k--]);
                }
            }
        }
        i++;
    }
    return str;
}

int main() {
    string str;
    cin >> str;
    cout << reverseWords(str) << endl;
    return 0;
}
