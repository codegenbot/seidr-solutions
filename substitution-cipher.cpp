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
    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    //replace("\r", " ").replace("\n", " ");
    a.erase(std::remove(a.begin(), a.end(), '\r'), a.end());
    b.erase(std::remove(b.begin(), b.end(), '\r'), b.end());
    c.erase(std::remove(c.begin(), c.end(), '\r'), c.end());
    
    a.erase(std::remove(a.begin(), a.end(), '\n'), a.end());
    b.erase(std::remove(b.begin(), b.end(), '\n'), b.end());
    c.erase(std::remove(c.begin(), c.end(), '\n'), c.end());
    
    
    for (int i = 0; i < c.size(); i++) {
        for (int j = 0; j < a.size(); j++) {
            if (c[i] == a[j]) {
                c[i] = b[j];
                break;
            }
        }
    }
    cout << c;
    return 0;
}
