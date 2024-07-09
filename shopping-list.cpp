```cpp
#include <iostream>
#include <iomanip>
#include <vector>

float shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float totalPrice = 0;
    for (int i = 0; i < prices.size(); ++i) {
        totalPrice += prices[i] * (1 - discounts[i] / 100.0);
    }
    return totalPrice;
}

int main() {
    int n;
    cin >> n;
    std::vector<float> prices(n);
    for (float &price : prices) {
        cin >> price;
    }
    std::vector<float> discounts(n);
    for (float &discount : discounts) {
        cin >> discount;
    }
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
}