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
Given a string of one or more words (separated by spaces), reverse all of the words that are ﬁve or more letters long and return the resulting string.
For example,
input:

output:

input:
a
output:
a
input:
this is a test
output:
this is a test
input:
this is another test
output:
this is rehtona test
input:
hi
output:
hi
*/
int main() {
  string s = "this is a test";
  string res;
  int i = 0;
  int n = s.length();
  while(i < n) {
    int start = i, end = i;
    while(i < n && s[i] != ' ') {
      i++;
      end = i;
    }
    if(end - start > 4) {
      for(int j = end - 1; j >= start; j--){
        res.push_back(s[j]);
      }
    }
    else {
      for(int j = start; j < end; j++) {
        res.push_back(s[j]);
      }
    }
    while(i < n && s[i] == ' ') {
      res.push_back(s[i++]);
    }
  }
  cout << res << endl;
}
