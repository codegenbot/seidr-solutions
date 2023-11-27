#include <iostream>
#include <vector>

using namespace std;

float calculateTotalPrice(vector<float> prices, vector<float> discounts) {
    float totalPrice = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float discountedPrice = prices[i] - (prices[i] * discounts[i] / 100.0);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    vector<float> prices;
    vector<float> discounts;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        float price;
        cin >> price;
        prices.push_back(price);
    }
    for (int i = 0; i < n; i++) {
        float discount;
        cin >> discount;
        discounts.push_back(discount);
    }

    float totalPrice = calculateTotalPrice(prices, discounts);

    cout << "Total Price: " << totalPrice << endl;

    return 0;
}