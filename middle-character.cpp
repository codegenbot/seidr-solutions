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
int main() {
    char str1[] = "QQ";
    char str2[] = " ";
    char str3[] = "$";
    char str4[] = "E9";
    char str5[] = ")b";
    
    int size1 = strlen(str1);
    int size2 = strlen(str2);
    int size3 = strlen(str3);
    int size4 = strlen(str4);
    int size5 = strlen(str5);
    
    if (size1 % 2 == 0) {
        cout << "\"" << str1[size1 / 2 - 1] << str1[size1 / 2] << "\"" << endl;
    } else {
        cout << "\"" << str1[size1 / 2] << "\"" << endl;
    }
    
    if (size2 % 2 == 0) {
        cout << "\"" << str2[size2 / 2 - 1] << str2[size2 / 2] << "\"" << endl;
    } else {
        cout << "\"" << str2[size2 / 2] << "\"" << endl;
    }
    
    if (size3 % 2 == 0) {
        cout << "\"" << str3[size3 / 2 - 1] << str3[size3 / 2] << "\"" << endl;
    } else {
        cout << "\"" << str3[size3 / 2] << "\"" << endl;
    }
    
    if (size4 % 2 == 0) {
        cout << "\"" << str4[size4 / 2 - 1] << str4[size4 / 2] << "\"" << endl;
    } else {
        cout << "\"" << str4[size4 / 2] << "\"" << endl;
    }
    
    if (size5 % 2 == 0) {
        cout << "\"" << str5[size5 / 2 - 1] << str5[size5 / 2] << "\"" << endl;
    } else {
        cout << "\"" << str5[size5 / 2] << "\"" << endl;
    }
    
    return 0;
}
