#include <vector>
#include <iostream>
using namespace std;

double calculateTotalPrice(vector<float> prices, vector<float> discounts) {
    double total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        double discountedPrice = prices[i] - (prices[i] * discounts[i] / 100.0);
        total += discountedPrice;
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
    cin >> n;
    vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    double totalPrice = calculateTotalPrice(prices, discounts);
    cout << totalPrice << endl;
    return 0;
}