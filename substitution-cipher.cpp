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
Fill in the blank to output the number of characters found in s2 that are exactly 2 places away from the end of the string.

Note: All submissions are tested on our systems, so please try out the solution not only locally, but once submitted as well.

function count2end(s2){
  var count = 0;
  // loop through all characters in string from the end back
  for (var i = s2.length-1;i>1; i-=2) {
    // if at character, count it
    if (s2[i]!='_') count++;
  }
  return count;
}

input:
A___t__ep__i______

output:
5
*/
int main() {
    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    for (int i = 0; i < c.size(); i++) {
        for (int j = 0; j < a.size(); j++) {
            if (c[i] == a[j]) {
                cout << b[j];
                break;
            }
        }
    }
    cout << endl;
}
