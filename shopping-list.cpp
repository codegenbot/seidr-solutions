#include <iostream>
#include <iomanip>
#include <vector>

float shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total = 0;
    for (int i = 0; i < prices.size(); i++) {
        float discountedPrice = prices[i] * (1 - discounts[i] / 100);
        total += discountedPrice;
    }
    return total;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> prices(n);
    std::vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        std::cin >> prices[i];
        std::cin >> std::noskipws;
    }
    std::cin.ignore();
    for (int i = 0; i < n; i++) {
        std::cin >> discounts[i];
    }
    std::cout << std::fixed << std::setprecision(6) << shoppingList(prices, discounts) << std::endl;
}