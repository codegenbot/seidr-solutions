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
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    for (int i = 0; i < message.size(); i++) {
        int index = cipher1.find(message[i]);
        if (index != string::npos) {
            cout << cipher2[index];
        } else {
            cout << message[i];
        }
    }
    return 0;
}