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
This problem gives a string. The program must remove all the newlines in the string.
For example, if the input is
a
b
output is ab
input:
a
b
c
output:
abc
*/
int main() {
    string a, b, c;
    cin >> a >> b >> c;
    for(int i=0; i<c.length(); i++) {
        //cout << c[i] << endl;
        int pos = a.find(c[i]);
        if(pos != string::npos) {
            c[i] = b[pos];
        }
    }
    cout << c << endl;
    return 0;
}
