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
    string s;
    while(getline(cin,s)){
        int len = s.length();
        int start = 0;
        for(int i = 0; i < len; i++){
            if(s[i] == ' '){
                if(i - start >= 5){
                    for(int j = start; j <= i - 1-j; j++){
                        char tmp = s[j];
                        s[j] = s[i - 1-j];
                        s[i - 1-j] = tmp;
                    }
                }
                start = i + 1;
            }
        }
        if(len - start >= 5){
            for(int j = start; j <= len - 1-j; j++){
                char tmp = s[j];
                s[j] = s[len - 1-j];
                s[len - 1-j] = tmp;
            }
        }
        cout << s << endl;
    }
}
