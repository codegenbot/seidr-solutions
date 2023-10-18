#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

/*
 
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
