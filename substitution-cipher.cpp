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
Given a string, return a version where all the "x" have been removed. Except an "x" at the very start or end should not be removed.

stringX("xxHxix") → "xHix"
stringX("abxxxcd") → "abcd"
stringX("xabxxxcdx") → "xabcdx"
*/
int main() {
    string str;
    cin >> str;
    for(int i=1; i<str.length()-1; i++) {
        if(str[i] == 'x') {
            str.erase(i, 1);
            i--;
        }
    }
    cout << c << endl;
    return 0;
}
