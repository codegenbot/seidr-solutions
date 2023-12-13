#include <iostream>
#include <vector>

using namespace std;

float calculateTotalPrice(const vector<float>& prices, const vector<float>& discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float discount = discounts[i] / 100.0;
        float discountedPrice = prices[i] - (prices[i] * discount);
        total += discountedPrice;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    float totalPrice = calculateTotalPrice(prices, discounts);
    cout << totalPrice << endl;
    return 0;
}