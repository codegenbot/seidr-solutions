#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

double totalPriceAfterDiscount(const vector<float>& prices, const vector<float>& discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); ++i) {
        totalPrice += prices[i] - (prices[i] * discounts[i] / 100.0);
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

    double totalPrice = totalPriceAfterDiscount(prices, discounts);

    cout << fixed << setprecision(1) << totalPrice << endl;

    return 0;
}