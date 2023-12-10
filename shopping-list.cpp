
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

double calculateTotalPrice(const vector<float>& prices, const vector<float>& discounts) {
    double total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float priceAfterDiscount = prices[i] * (1 - discounts[i]);
        total += round(priceAfterDiscount * 100) / 100;
    }
    return total;
}

int main() {
    int n, i;
    cin >> n;
    vector<float> prices;
    vector<float> discounts;
    for (i = 0; i < n; i++) {
        float price, discount;
        cin >> price >> discount;
        prices.push_back(price);
        discounts.push_back(discount);
    }
    double totalPrice = calculateTotalPrice(prices, discounts);
    cout << "The total price of the shopping trip is: " << totalPrice << endl;
    return 0;
}