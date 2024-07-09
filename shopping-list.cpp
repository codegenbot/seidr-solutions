```cpp
#include <iostream>
#include <iomanip>
#include <vector>

float shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float totalPrice = 0;
    for (size_t i = 0; i < prices.size(); ++i) {
        float discountedPrice = prices[i] * (1 - discounts[i] / 100);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    std::vector<float> prices = {10.99f, 5.99f, 7.99f};
    std::vector<float> discounts = {0.f, 20.f, 15.f};
    std::cout << std::fixed << std::setprecision(2) << shoppingList(prices, discounts) << std::endl;
}