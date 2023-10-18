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
   
*/
int main() {
    string s;
    getline(cin, s);
    int n = s.length();
    if (n % 2 == 0) cout << s[n / 2 - 1] << s[n / 2];
    else cout << s[n / 2];
    return 0;
}
