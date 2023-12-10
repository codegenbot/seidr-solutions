```
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    vector<float> prices;
    vector<float> discounts;
    float total = 0.0;
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++) {
        float price, discount;
        cin >> price >> discount;
        prices.push_back(price);
        discounts.push_back(discount);
    }
    if (n == 1) {
        total = prices[0] * (1 - discounts[0]);
    } else {
        for (i = 0; i < n; i++) {
            total += round(prices[i] * (1 - discounts[i]));
        }
    }
    cout << total << endl;
    return 0;
}
```