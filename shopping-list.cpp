#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

float calculateTotalPrice(vector<float> prices, vector<float> discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] - prices[i] * discounts[i] / 100.0; // Corrected calculation
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }

    float result = calculateTotalPrice(prices, discounts);
    cout << fixed << setprecision(2) << result << endl; // Output total price with 2 decimal places

    return 0;
}