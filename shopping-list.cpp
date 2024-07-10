#include <iostream>
#include <vector>

using namespace std;

float calculateTotalPrice(vector<float> prices, vector<float> discounts) {
    float total = 0.0;
    for (size_t i = 0; i < prices.size(); ++i) {
        total += prices[i] * (1.0 - discounts[i] / 100.0);
    }
    return total;
}

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input size." << endl;
        return 1;
    }

    vector<float> prices(n);
    vector<float> discounts(n);

    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> discounts[i];
        if (discounts[i] == 100.0) {
            cout << "Invalid discount value (100% discount)." << endl;
            return 1;
        }
    }

    float total_price = calculateTotalPrice(prices, discounts);
    cout << total_price << endl;

    return 0;
}