#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
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
//AC 0ms
string ReverseStringAfresh(string str){
    int head = 0, i = 0, len = str.length();
    while (i <= len) {
        if (str[i] == ' ' || i == len){
            if (i - head >= 5){
                int end = i;
                i--;
                while (head < end){
                    swap(str[head], str[i]);
                    head++;
                    i--;
                }
                head = i + 2;
            }
            else{
                head = i + 1;
            }
        }
        i++;
    }
    return str;
}

//AC 0ms
string reverseWords(string s){
    string ret = "";
    int head = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == ' '){
            if (i + 1 - head >= 5){
                for (int j = i - 1; j >= head; j--)
                    ret.append(1, s[j]);
            }
            else{
                for (int j = head; j <= i; j++)
                    ret.append(1, s[j]);
            }
            ret.append(1, ' ');
            head = i + 1;
        }
    }
    if (s.length() + 1 - head >= 5) {
        for (int j = s.length() - 1; j >= head; j--)
            ret.append(1, s[j]);
    }
    else{
        for (int j = head; j < s.length(); j++)
            ret.append(1, s[j]);
    }
    ret.append(1, ' ');
    ret.erase(ret.length() - 1, 1);
    return ret;
}




int main() {
    string a = "I have  an apple.";
    cout << ReverseStringAfresh(a) << endl;
    cout << reverseWords(a) << endl;
    cout << ReverseStringAfresh("a") << endl;
    cout << reverseWords("a") << endl;
    cout << ReverseStringAfresh("this is a test") << endl;
    cout << reverseWords("this is a test") << endl;
    cout << ReverseStringAfresh("this is another test") << endl;
    cout << reverseWords("this is another test") << endl;
    cout << ReverseStringAfresh("hi") << endl;
    cout << reverseWords("hi") << endl;
}
