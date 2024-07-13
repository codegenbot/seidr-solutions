```c++
#include <iostream>
#include <iomanip>
#include <vector>

float shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total = 0;
    for (int i = 0; i < prices.size(); ++i) {
        total += prices[i] * (1 - discounts[i]);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    std::vector<float> prices(n);
    for (float& price : prices) {
        cin >> price;
    }
    cin >> n;
    std::vector<float> discounts(n);
    for (float& discount : discounts) {
        cin >> discount;
    }
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    return 0;
}