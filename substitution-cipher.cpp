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
void test(){//replace all the space to \n (but not \n\n => \n) then invert \n\n => \n)
    cout << "======== " << __FUNCTION__ <<  " ========" << endl;
    string s;
    do {
        getline(cin, s);
        replace(s.begin(), s.end(), ' ', '\n');
        cout << s << endl;
    } while (cin.get() != '\n');

}
int main() {
    test();
    return 0;
}
