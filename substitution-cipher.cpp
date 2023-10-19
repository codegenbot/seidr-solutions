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
This problem gives a string. The program must output the string with all the spaces removed.
For example, input:
Hello world
output:
Helloworld
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
