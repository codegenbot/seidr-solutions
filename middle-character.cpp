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
string middle(string str) {
    int size = str.length();
    if (size % 2 == 0) {
        return str.substr(size / 2 - 1, 2);
    } else {
        return str.substr(size / 2, 1);
    }
}

int main() {
    char str1[] = "Q";
    char str2[] = " ";
    char str3[] = "$";
    char str4[] = "E9";
    char str5[] = ")b";

    cout << "\"" << middle(str1) << "\"" << endl;
    cout << "\"" << middle(str2) << "\"" << endl;
    cout << "\"" << middle(str3) << "\"" << endl;
    cout << "\"" << middle(str4) << "\"" << endl;
    cout << "\"" << middle(str5) << "\"" << endl;

    return 0;
}
