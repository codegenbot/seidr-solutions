#include <vector>
#include <iostream>

using namespace std;

float totalPriceAfterDiscount(const vector<float>& prices, const vector<float>& discounts) {
    float totalPrice = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        float price = prices[i];
        float discount = price * (discounts[i] / 100);
        totalPrice += price - discount;
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
    float result = totalPriceAfterDiscount(prices, discounts);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}