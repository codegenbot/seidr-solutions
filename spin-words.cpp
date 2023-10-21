#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <iostream>
#include <memory>
#include <string>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <cstring>
using namespace std;
static const double EPS = 1e-5;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int m;
    cin >> m;
    int r = 0;
    for (int j = 0; j < n; j++) {
      if (a[j] == m) {
        r++;
      }
    }
    cout << r << endl;
  }

  return 0;
}
