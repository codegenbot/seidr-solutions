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
    string str;
    getline(cin, str);
    vector<string> words;
    for (int i = 0; i < str.size(); i++) {
        string word;
        while (i < str.size() && str[i] != ' ') {
            word += str[i];
            i++;
        }
        words.push_back(word);
    }
    for (int i = 0; i < words.size(); i++) {
        if (words[i].size() >= 5) {
            reverse(words[i].begin(), words[i].end());
        }
        cout << words[i];
        if (i != words.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
