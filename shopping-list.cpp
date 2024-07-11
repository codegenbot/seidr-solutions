#include <iostream>
#include <vector>

using namespace std;

int main() {
    size_t n;
    cin >> n;
    vector<float> prices(n);
    for (size_t i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    vector<float> discounts(prices.size());
    for (size_t i = 0; i < prices.size(); ++i) {
        cin >> discounts[i];
    }

    float total_price = 0.0;
    for (size_t i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1.0 - discounts[i] / 100.0);
    }

    cout << total_price << "\n";

    return 0;
}