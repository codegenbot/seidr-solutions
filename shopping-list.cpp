#include <vector>
#include <iostream>

using namespace std;

double totalShoppingTripPrice(const vector<float>& prices, const vector<float>& discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); i++) {
        double priceWithDiscount = prices[i] * (1 - discounts[i] / 100.0);
        totalPrice += priceWithDiscount;
    }
    return totalPrice;
}

int main() {
    int n;
    cin >> n;

    vector<float> prices(n);
    for (float& price : prices) {
        cin >> price;
    }

    vector<float> discounts(n);
    for (float& discount : discounts) {
        cin >> discount;
    }

    cout << fixed << setprecision(1) << totalShoppingTripPrice(prices, discounts) << endl;

    return 0;
}