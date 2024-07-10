#include <iostream>
#include <iomanip>
#include <vector>

double shoppingList(std::vector<float>& prices, std::vector<float>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100.0);
        total += price - discount;
    }
    return total;
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
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << std::endl;
    return 0;
}