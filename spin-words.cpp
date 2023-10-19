// Make sure that  -> 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn = 1e6 + 7;
const int inf = 0x3f3f3f3f;
const int mod = 1e9 + 7;
typedef pair<int, int> pis;

int main() {
    string str;
    getline(cin, str);
    int n = str.size();
    int i = 0;
    while(i < n) {
        int j = i;
        while(j < n && str[j] != ' ') {
            j++;
        }
        if(j - i >= 5) {
            reverse(str.begin() + i, str.begin() + j);
        }
        i = j + 1;
    }
    cout << str << endl;
    return 0;
}
