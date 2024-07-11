#include <vector>
#include <iostream>

double shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); ++i) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100.0);
        total += price - discount;
    }
    return total;
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
    std::cout << result << std::endl;

    return 0;
}