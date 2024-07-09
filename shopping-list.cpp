#include <iostream>
#include <iomanip>

float shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float totalPrice = 0;
    for (size_t i = 0; i < prices.size(); ++i) {
        float discountedPrice = prices[i] * (1 - discounts[i] / 100);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    std::vector<float> prices = {10.99, 5.99, 7.99};
    std::vector<float> discounts = {0, 20, 15};

    std::cout << std::fixed;
    std::cout << std::setprecision(2) << shoppingList(prices, discounts) << std::endl;
}