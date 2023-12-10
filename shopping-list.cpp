```
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        float price, discount;
        cin >> price >> discount;
        prices[i] = price * (1 - discount / 100.0);
    }
    float total = accumulate(prices.begin(), prices.end(), 0.0);
    cout << fixed << setprecision(2) << total << endl;
    return 0;
}
```