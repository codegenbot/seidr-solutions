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

// a is a test
// a is etsat
// "a" "is" "a" "test"
string reverseWords(string str) {
    int start = 0;
    int end = 0;
    int len = str.size();
    int wordLen = 0;
    int i = 0;
    // how many ' '
    int spaceCnt = 0;
    // every word start
    vector<int> wordStart;
    // length of words
    vector<int> wordLen;
    while (i < len) {
        if (str[i] == ' ') {
            // 只计算首尾空格
            if (spaceCnt == 0) {
                wordStart.push_back(i + 1);
            } else if (wordLen.size() != 0 && wordLen.back() != 0) {
                //wordLen is not 0
                wordStart.push_back(i + 1);
            } else {

            }
            if (wordLen.size() > 0 && wordLen.back() != 0) {
                wordLen.push_back(0);
            }
            wordLen = 0;
            spaceCnt++;
        } else {
            wordLen++;
            if (wordLen == 1 && wordLen.size() == 0) {
                wordLen.push_back(1);
            } else if (wordLen >= 1) {
                wordLen.back()++;
            }
        }
        i++;
    }

    int coutSpaceCnt = 0;
    if (str.back() == ' ') {
        coutSpaceCnt++;
    }

    int wordCnt = wordStart.size() + 1;
    int j = 0;
    int k = 0;
    int cnt = 0;
    for (int i = 0; i < wordCnt; i++) {
        cnt = wordLen[i];
        if (cnt >= 5 && wordLen[i] == cnt) {
            j = wordStart[i];
            k = j + wordLen[i] - 1;
            while (j < k) {
                swap(str[j++], str[k--]);
            }
        }
        coutSpaceCnt = coutSpaceCnt + cnt + 1;
    }

    while (str.size() > coutSpaceCnt) {
        str.pop_back();
    }
    return str;
}

int main() {
    string str;
    cin >> str;
    cout << str.size() << endl;
    cout << reverseWords(str) << endl;
    return 0;
}
//
// 1. make sure that string one or more words
// 2.
