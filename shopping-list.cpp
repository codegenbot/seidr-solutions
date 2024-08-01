#include <vector>
#include <iostream>
#include <iomanip>

double shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    double totalPrice = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        float price = prices[i];
        float discount = discounts[i] / 100.0;
        totalPrice += price * (1 - discount);
    }
    return totalPrice;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> prices(n);
    for (float& price : prices) {
        std::cin >> price;
    }

    std::vector<float> discounts(n);
    for (float& discount : discounts) {
        std::cin >> discount;
    }

    double result = shoppingList(prices, discounts);
    std::cout << std::fixed << std::setprecision(1) << result << std::endl;

    return 0;