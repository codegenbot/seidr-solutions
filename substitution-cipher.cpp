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
This problem gives 3 strings. The first two represent a cipher, mapping each character in one string to the one at the same index in the other string. The program must apply this cipher to the third string and return the deciphered message.
For example,
input:



output:

input:
a
a
a
output:
a
input:
j
h
j
output:
h
input:
a
z
a
output:
z
input:
e
l
eeeeeeeeee
output:
llllllllll
*/
int main() {
	var first = ["e", "o", "b", "j", "f"];
	var second = ["p", "g", "a", "w", "s"];
	var third = [ "ee", "bo", "bbbb", "aaaa", "j", "f", "e", "s", "mmm", "mmm", "ooo" ];
	function solution(fir,se,th) {
	  var f = '', s = '', thir = '';
	  for (var i = 0; i < fir.length; i++) {
	    f += fir[i];
	  }
	  for (var i = 0; i < se.length; i++) {
	    s += se[i];
	  }
	  for (var i = 0; i < th.length; i++) {
	    thir += th[i];
	  }
	  var matcher = '';
	  for (var i = 0; i < f.length; i++) {
	    matcher += f[i] + ',' + s[i] + '/';
	  }
	  matcher = matcher.slice(0, -1);
	  var patt = new RegExp(matcher, "g");
	  return thir.match(patt);
	}
	console.log(solution(first, second, third));
}
module.exports = solution;
