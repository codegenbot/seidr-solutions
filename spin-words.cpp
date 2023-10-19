#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<string>
#include<cctype>
#include<map>
#include<stack>
#include<queue>
#include<algorithm>
#include<vector>
#include<bitset>
#include<utility>
#include<set>

#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define ROF(i, a, b) for(int i = a; i >= b; i--)
#define REP(i, n) for(int i = 0; i < n; i++)
#define FF first
#define SS second
#define PB push_back
#define MP make_pair
#define debug(args...) {dbg,args; cerr<<endl;}

input:
a
output:
a
input:
this is a test
output:
this is a test
input:
this is another test
output:
this is rehtona test
input:
hi
output:
hi
*/
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
