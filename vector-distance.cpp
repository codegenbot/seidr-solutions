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
    int n;
    cin >> n;
    vector<float> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> n;
    vector<float> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (a[i] - b[i]) * (a[i] - b[i]);
    }
    cout << sqrt(sum) << endl;
}
