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
    int numItems;
    cin >> numItems;

    vector<float> prices(numItems);
    vector<float> discounts(numItems);

    for (int i = 0; i < numItems; ++i) {
        cin >> prices[i];
    }

    for (int i = 0; i < numItems; ++i) {
        cin >> discounts[i];
    }

    float total = calculateTotalPrice(prices, discounts);
    cout << total << "\n";

    return 0;
}