#include <iostream>
#include <vector>

using namespace std;

float calculateTotalPrice(vector<float> prices, vector<float> discounts) {
    float totalPrice = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float discountedPrice = prices[i] * (100.0 - discounts[i]) / 100.0;
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    vector<float> prices = {10.0, 20.0, 30.0};
    vector<float> discounts = {10.0, 15.0, 20.0};

    float totalPrice = calculateTotalPrice(prices, discounts);

    cout << totalPrice << endl;

    return 0;
}