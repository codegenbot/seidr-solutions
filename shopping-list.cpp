#include <iostream>
#include <vector>

using namespace std;

float calculateTotalPrice(vector<float> prices, vector<float> discounts) {
    if (prices.size() != discounts.size()) {
        return -1;
    }

    float total = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        total += prices[i] - prices[i] * (1 - discounts[i]);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    vector<float> discounts(n);
    for (int i = 0; i < n; ++i) {
        cin >> discounts[i];
        discounts[i] /= 100.0;
    }

    float total_price = calculateTotalPrice(prices, discounts);
    cout << total_price << endl;

    return 0;
}