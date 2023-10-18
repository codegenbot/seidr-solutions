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
input:
a
a
a
output:
a
*/

string decipher(string cipher1, string cipher2, string encoded) {
    string decoded = "";
    for(int i = 0; i < encoded.size(); i++) {
        int index = cipher1.find(encoded[i]);
        if(index != -1) {
            decoded += cipher2[index];
        }
        else {
            decoded += encoded[i];
        }
    }
    if(decoded[decoded.size() - 1] == '\n' && decoded[decoded.size() - 2] == '\n') {
        decoded[decoded.size() - 1] = ' ';
    }
    if(decoded[decoded.size() - 1] == '\n') {
        decoded[decoded.size() - 1] = ' ';
    }
    if(decoded[decoded.size() - 1] == '\n') {
        decoded[decoded.size() - 1] = ' ';
    }
    if(decoded[decoded.size() - 1] == '\n') {
        decoded[decoded.size() - 1] = ' ';
    }
    if(decoded[decoded.size() - 1] == '\n') {
        decoded[decoded.size() - 1] = ' ';
    }
    return decoded;
}

int main() {
    string cipher1 = "abcdefghijklmnopqrstuvwxyz";
    string cipher2 = "etaoinshrdlucmfwypvbgkjqxz";
    string encoded = "ejp mysljylc kd kxveddknmc re jsicpdrysi\nrbcpc ypc rtcsra dkh wyfrepkym veddknkmkrkcd\nde kr kd eoya kw aej tysr re ujdr lkgc jv\n\n";
    string decoded = decipher(cipher1, cipher2, encoded);
    cout << decoded << endl;
    return 0;
}
