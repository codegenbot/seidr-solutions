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
string getMiddle(string word) {
    char t[2];
    if (word.size()%2==1) {
        int n = word.size()/2;
        t[0]= word[n];
        t[1]='\0';
        
        return t;
    } else {
        int n = word.size()/2;
        t[0]= word[n-1];
        t[1]= word[n];
        return t;
    }
}
int main() {
    cout<<getMiddle("test")<<endl;
    cout<<getMiddle("testing")<<endl;
    cout<<getMiddle("middle")<<endl;
    cout<<getMiddle("A")<<endl;
    
}
