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
A string is said to be beautiful if b occurs in it no more times than a; c occurs in it no more times than b; etc.
Given a string, check whether it is beautiful.
Example
For inputString = "bbbaacdafe", the output should be
isBeautifulString(inputString) = true;
For inputString = "aabbb", the output should be
isBeautifulString(inputString) = false;
For inputString = "bbc", the output should be
isBeautifulString(inputString) = false.
Input/Output
[time limit] 500ms (cpp)
[input] string inputString
A string of lowercase letters.
Constraints:
3 ≤ inputString.length ≤ 50.
[output] boolean
*/
int main() {
    string s;
    cin >> s;
    int count[26];
    memset(count, 0, sizeof(count));
    for (int i = 0; i < s.size(); i++) {
        count[s[i] - 'a']++;
    }
    for (int i = 1; i < 26; i++) {
        if (count[i] > count[i - 1]) {
            cout << "false" << endl;
            return 0;
        }
    }
    return 0;
}
