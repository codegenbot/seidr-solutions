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
    getline(cin,str);
    string temp = "";
    string res = "";
    for(int i = 0; i < str.size(); i++){
        if(str[i] != ' '){
            temp += str[i];
        }
        if(str[i] == ' ' || i == str.size()-1){
            if(temp.size() >= 5){
                string temp2 = "";
                for(int j = temp.size()-1; j >= 0; j--){
                    temp2 += temp[j];
                }
                res += temp2;
            }
            else{
                res += temp;
            }
            if(i == str.size()-1) break;
            res += ' ';
            temp = "";
        }
    }
    cout << res << endl;
}
