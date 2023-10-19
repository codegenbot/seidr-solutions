#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    for(int i=0; i<c.length(); i++) {
        //cout << c[i] << endl;
        int pos = a.find(c[i]);
        if(pos != string::npos) {
            c[i] = b[pos];
        }
    }
    while(c[c.length()-1] == '\n') {
        c.pop_back();
    }
    cout << c << endl;
    return 0;
}
