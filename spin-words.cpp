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

string reverseString(string s){
    int i = 0;
    for(i = 0; i < s.size()/2; i++){
        char temp = s[i];
        s[i] = s[s.size()-1-i];
        s[s.size()-1-i] = temp;
        //cout << s << endl;
    }
    return s;
}

string reverseWords(string sentence){
    string result = "", temp = "";
    int i = 0;
    for(i = 0; i < sentence.size(); i++){
        if(sentence[i] != ' '){
            temp += sentence[i];
        }else{
            if(temp.size() >= 5){
                result += reverseString(temp);
            }else{
                result += temp;
            }
            result += " ";
            temp = "";
        }
    }
    if (temp.size() >= 5){
        result += reverseString(temp);
    }else{
        result += temp;
    }
    return result;
}

int main() {
    string s = "this is a test";
    cout << reverseWords(s) << endl;
}
