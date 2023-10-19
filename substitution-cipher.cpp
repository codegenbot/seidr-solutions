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
This problem gives 2 strings. The first two represent a cipher, mapping each character in one string to the one at the same index in the other string. The program must apply this cipher to the third string and return the deciphered message.
For example,
input:
a b
a b
output:
a
input:
a a
a a
output:
a
input:
j h
j h
output:
h
input:
a z
a z
output:
z
input:
e l
eeeeeeeeee
output:
llllllllll
*/
int main() {
	string a, b, c;
	cin >> a >> b >> c;
	for (int i = 0; i < c.length(); i++) {
		for (int j = 0; j < a.length(); j++) {
			if (a[j] == c[i]) {
				c[i] = b[j];
			}
			else if (b[j] == c[i]) {
				c[i] = a[j];
			}
		}
	}
	cout << c << endl;
}
