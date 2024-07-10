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
    if (!(cin >> n)) {
        cerr << "Error reading the number of items" << endl;
        return 1;
    }

    vector<float> prices(n);
    for (int i = 0; i < n; ++i) {
        if (!(cin >> prices[i])) {
            cerr << "Error reading price for item " << i + 1 << endl;
            return 1;
        }
    }

    vector<float> discounts(n);
    for (int i = 0; i < n; ++i) {
        if (!(cin >> discounts[i])) {
            cerr << "Error reading discount percentage for item " << i + 1 << endl;
            return 1;
        }
    }

    float total_price = calculateTotalPrice(prices, discounts);
    cout << total_price << endl;

    return 0;
}