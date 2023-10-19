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
You are given a string. Your task is to find out if the string contains: alphanumeric characters, alphabetical characters, digits, lowercase and uppercase characters.
In the first line, print True if has any alphanumeric characters. Otherwise, print False.
In the second line, print True if has any alphabetical characters. Otherwise, print False.
In the third line, print True if has any digits. Otherwise, print False.
In the fourth line, print True if has any lowercase characters. Otherwise, print False.
In the fifth line, print True if has any uppercase characters. Otherwise, print False.
Sample Input
qA2

Sample Output
True
True
True
True
True


output:
Explanation
qA2 contains alphanumeric characters.
qA2 contains alphabetical characters.
qA2 contains digits.
qA2 contains lowercase characters.
qA2 contains uppercase characters.
*/
int main() {
    string s;
    cin >> s;
    cout << boolalpha;
    cout << (bool)s.find_first_of("0123456789") << endl;
    cout << (bool)s.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") << endl;
    cout << (bool)s.find_first_of("0123456789") << endl;
    cout << (bool)s.find_first_of("abcdefghijklmnopqrstuvwxyz") << endl;
    cout << (bool)s.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") << endl;
    return 0;
}
