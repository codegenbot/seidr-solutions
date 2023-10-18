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
#include <algorithm>

using namespace std;

/*
    Make sure that   ->  
    Make sure that   ->  

*/
int main() {
    //freopen("input.txt", "r", stdin);
    string s;
    getline(cin, s);
    int n = s.length();
    if (n % 2 == 0) cout << s[n / 2 - 1] << s[n / 2] << endl;
    else cout << s[n / 2] << endl;
    return 0;
}
