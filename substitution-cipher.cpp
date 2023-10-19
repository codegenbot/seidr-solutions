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
#include <fstream>
#include <sstream>
using namespace std;

/*
This gave me the IO WA every time but I never understood why. Finally got AC after make \n\n -> 
*/
int main() {
    string s, pre = "", temp;
    
    while (getline(cin, temp)) {
        if (pre == "") {
            pre = temp;
        }
        else {
            if (pre == "" || temp == "") {
                s += temp;
            }
            else {
                s += " " + temp;
            }
            pre = temp;
        }
    }
    cout << c << endl;
    return 0;
}
