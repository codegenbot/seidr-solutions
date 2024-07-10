#include <iostream>
#include <vector>

using namespace std;

float calculateTotalPrice(vector<float> prices, vector<float> discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        total += prices[i] * (1.0 - discounts[i] / 100.0);
    }
    return total;
}

int main() {
    int n;
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid input for number of items";
        return 1;
    }

    vector<float> prices(n);
    for (int i = 0; i < n; ++i) {
        if (!(cin >> prices[i]) || prices[i] < 0) {
            cout << "Invalid input for price";
            return 1;
        }
    }

    vector<float> discounts(n);
    for (int i = 0; i < n; ++i) {
        if (!(cin >> discounts[i]) || discounts[i] < 0 || discounts[i] > 100) {
            cout << "Invalid input for discount";
            return 1;
        }
    }

    float total_price = calculateTotalPrice(prices, discounts);
    cout << total_price << endl;

    return 0;
}