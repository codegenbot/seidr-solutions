#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define dd(x) cout << #x << " = " << x << ", "
#define de(x) cout << #x << " = " << x << endl
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define rep(i,l,r) for(int i=(l);i<(r);++i)
//-------
int main() {
    string s;
    cin >> s;
    int len = s.size();
    if (len % 2 == 0) {
        cout << s[len/2-1] << s[len/2] << endl;
    } else {
        cout << s[len/2] << endl;
    }
    return 0;
}
