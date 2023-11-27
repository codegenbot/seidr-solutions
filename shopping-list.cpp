#include <iostream>
#include <vector>

using namespace std;

float calculateTotalPrice(vector<float> prices, vector<float> discounts) {
    float totalPrice = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float discountedPrice = prices[i] * discounts[i] / 100;
        totalPrice += prices[i] - discountedPrice;
    }
    return totalPrice;
}

int main() {
    vector<float> prices = {10.0, 20.0, 30.0};
    vector<float> discounts = {5.0, 10.0, 15.0};
    float total = calculateTotalPrice(prices, discounts);
    cout << total << endl;
    return 0;
}