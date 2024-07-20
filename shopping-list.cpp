#include <vector>
#include <iostream>

double totalShoppingCost(const std::vector<float>& prices, const std::vector<float>& discounts) {
    double totalCost = 0;
    for (int i = 0; i < prices.size(); ++i) {
        totalCost += prices[i] * (1 - discounts[i] / 100.0);
    }
    return totalCost;
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

    double totalCost = totalShoppingCost(prices, discounts);

    std::cout << std::fixed << std::setprecision(1) << totalCost << std::endl;

    return 0;
}