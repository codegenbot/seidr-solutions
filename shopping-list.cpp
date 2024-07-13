#include <iostream>
#include <vector>
#include <iomanip>

float shoppingList(const vector<float>& prices, const vector<float>& discounts) {
    float total = 0.0f;
    for (int i = 0; i < prices.size(); ++i) {
        total += prices[i] * (1 - discounts[i]);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (float& price : prices) {
        cin >> price;
    }
    cin >> n;
    vector<float> discounts(n);
    for (float& discount : discounts) {
        cin >> discount;
    }
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    return 0;