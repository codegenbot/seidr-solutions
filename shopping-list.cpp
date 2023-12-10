```
#include <vector>
#include <iostream>
using namespace std;

float calculateTotal(const vector<float>& prices, const vector<float>& discounts) {
    float total = 0.0f;
    for (int i = 0; i < prices.size(); i++) {
        total += round(prices[i] * (1 - discounts[i]));
    }
    return total;
}

int main() {
    vector<float> prices;
    vector<float> discounts;
    float total = 0.0f;
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++) {
        float price, discount;
        cin >> price >> discount;
        prices.push_back(price);
        discounts.push_back(discount);
    }
    total = calculateTotal(prices, discounts);
    cout << "Total: " << total << endl;
    return 0;
}
```