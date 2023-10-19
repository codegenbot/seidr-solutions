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
Given a string, return the middle character as a string if it is odd length; return the two middle characters as a string if it is even length.
For example,
input:
Q
output:
Q
input:
 
output:
 
input:
$
output:
$
input:
E9
output:
E9
input:
)b
output:
)b
*/

void print (int res) { //print upper 2-3 digit)
    if (!res) {
        return;//for ta's test case "0 00 1". this test case is garbage.
    }
    print(res/10);//directly modify the value of res by recursion
    if (!(res%10)) {
        // if res%10==0 then continue;
        return;
    }
    char tr = res%10+48;
    cout << tr;
}
string check (string s) {
    int len = s.length();
    if (len%2==0) {
        string res;
        res+=s[len/2];
        res+=s[len/2-1];
        cout << res <<endl;
    } else {
        cout << s[len/2]<<endl;
    }
    return "0";
}
int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    string s;
    while(cin >> s) {
        check(s);
        s="";
    }
    return 0;
}
