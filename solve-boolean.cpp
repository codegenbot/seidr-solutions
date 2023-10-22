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
Given a string representing a Boolean expression consisting of T, F, |, and &, evaluate it and return the resulting Boolean.
For example,
input:
  t
output:
  True
input:
  f
output:
  False
input:
  f&f
output:
  False
input:
  f&t
output:
  False
input:
  t&f
output:
  False
*/

class Solution {
  public:
    bool parse(string input, int start, int end) {
      if(input[start] == 't' || input[start] == 'T') return true;
      if(input[start] == 'f' || input[start] == 'F') return false;
      cout << start << " " << end << endl;
      for(int i = start; i <= end; i++) {
        if(input[i] == '|') {
          return parse(input, start, i-1) || parse(input, i+1, end);
        }
        if(input[i] == '&') {
          return parse(input, start, i-1) && parse(input, i+1, end);
        }
      }
      return false;
    }

    bool parseBoolean(string input) {
      return parse(input, 0, input.length()-1);
    }
};

int main() {
  string input;
  Solution sol;
  //input = "FF";
  //cout << sol.parseBoolean(input) << endl;
  input = "tt&tt&tt&tt&tt|tt|tt&tt|tt";
  cout << sol.parseBoolean(input) << endl;
  cin >> input;
}
