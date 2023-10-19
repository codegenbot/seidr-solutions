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
This program must read a string from standard input. If the string has a newline character at the end, it must remove it; otherwise it must print the string as is.
input: abc
output: abc
input: abc
output: abc
input: abc
output: abc
input: abc
output: abc
input: abc
output: abc
input: abc
output: abc
input: abc
output: abc
input: abc
output: abc
input: abc
output: abc
input: abc
output: abc
input: abc
output: abc
input: abc
output: abc
input: abc
output: abc
input: abc
output: abc
input: abc
output: abc
input: abc
output: abc
*/
int main() {
    string s;
    getline(cin, s);
    if (s[s.size()-1] == '\n') {
        s.erase(s.size()-1);
    }
    cout << endl;
}
