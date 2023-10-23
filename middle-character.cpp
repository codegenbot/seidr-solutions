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
  string s, combo = "";
  int length = 0;
  
  while (getline(cin, s)) {
    length = s.length();
    if (length == 1) combo = s;
    else {
      if (length % 2 == 1) combo = s[length / 2];
      else combo = s[length / 2 - 1] + "" + s[length / 2]; 
    }
    cout << combo << endl;
    combo = "";
  }
  return 0;
}
