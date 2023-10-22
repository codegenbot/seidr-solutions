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
bool parseExpression(string s){
  int i = 0;
  int j = s.length()-1;
  if(s.compare("t") == 0){
    return true;
  }
  if(s.compare("f") == 0){
    return false;
  }
  if(s[0] == '(') i++;
  if(s[s.length()-1] == ')') j--;
  string t1 = "";
  string t2 = "";
  string op = "";
  int depth = 0;
  while(i < s.length()){
    if(s[i] == '('){
      depth++;
    }
    if(s[i] == ')'){
      depth--;
    }
    if(s[i] == '&' && depth == 0){
      op = "&";
      break;
    }
    if(s[i] == '|' && depth == 0){
      op = "|";
      break;
    }
    i++;
  }
  if(op == ""){
    return parseExpression(s.substr(1,s.length()-2));
  }
  t1 = s.substr(0,i);
  t2 = s.substr(i+1,s.length()-i-1);
  cout<<t1<<" "<<t2<<endl;
  if(op == "&"){
    return parseExpression(t1) && parseExpression(t2);
  }
  if(op == "|") return parseExpression(t1) || parseExpression(t2);
  return false;
}

int main() {
  string s = "f&t|t&f";
  bool res = parseExpression(s);
  cout<<res<<endl;
  return 0;
}
