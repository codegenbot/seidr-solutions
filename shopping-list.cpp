#include <iostream>
#include <vector>

float calculateTotalPrice(const vector<float>& prices, const vector<float>& discounts) {
    float totalPrice = 0.0;
    for (size_t i = 0; i < prices.size(); i++) {
        float discountedPrice = prices[i] - (prices[i] * discounts[i] / 100);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    vector<float> prices {10.0, 20.0, 30.0};
    vector<float> discounts {5.0, 10.0, 15.0};
    float totalPrice = calculateTotalPrice(prices, discounts);
    cout << "Total Price: " << totalPrice << endl;
    return 0;
}