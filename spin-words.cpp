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
string reverse_string(string str, int start, int end) {
    string s = str[start];
    for(int i = start+1; i <= end; i++){
        s = str[i] + s;
    }return s;
}
int main() {
    string s;
    getline(cin, s);
    while(s[0]!='\0'){
        int start = 0, end = 0;
        // int len = s.length();
        // int in = 0;
        // for(int i = 0; i < len; i++){
        //     if(s[i] != ' '){
        //         in++;
        //     }else if(in > 0){
        //         if(s[i-1] == ' ')
        //             in = 0;
        //         else {
        //             end = i-1;
        //             if(in >= 5)
        //                 cout << reverse_string(s, start, end);
        //             else
        //                 cout << s.substr(start, in);
        //             cout << " ";
        //             in = 0;
        //         }
                
        //     }
        // }
        // if(end < len-1){
        //     if(in >= 5)
        //         cout << s.substr(0, start) << reverse_string(s, start, len-1) << s.substr(end);
        //     else
        //         cout << s.substr(0, start) << s.substr(start) << s.substr(end);
        // }

        int diff = 0;
        int i = 0;
        while(s[i]!='\0'){
            if(s[i] != ' '){
                // start = i-diff;
                end = i-diff;
            }else {
                if(end-start >= 4)
                    cout << reverse_string(s, start, end);
                else
                    cout << s.substr(start, i-start);
                cout << " ";
                start = i+1 - diff;
            }i++;
        }if(end-start >= 4)
            cout << s.substr(start, end-start+1);
        else
            cout << s.substr(start, i-start);
        // if(s[start-1] != s[i -1])
        //     if(end-start >= 4)
        //         cout << s.substr(start, end-start+1);
        //     else
        //         cout << s.substr(start);
        cout << endl;
        getline(cin, s);
    }
}
