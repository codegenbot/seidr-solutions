#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    vector<double> discounts(prices.size());
    for (int i = 0; i < prices.size(); ++i) {
        cin >> discounts[i];
    }

    double total_price = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1.0 - discounts[i] / 100.0) * prices[i];
    }

    cout << total_price << "\n";

    return 0;
}