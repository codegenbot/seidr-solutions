#include <iostream>
#include <vector>
#include <iomanip>

float shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float totalPrice = 0;
    for (size_t i = 0; i < prices.size(); ++i) {
        float discountedPrice = prices[i] * (1 - discounts[i]);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    std::vector<float> prices;
    std::vector<float> discounts;

    float price, discount;
    while (std::cin >> price >> discount) {
        prices.push_back(price);
        discounts.push_back(discount); 
    }

    std::cout << std::fixed << std::setprecision(2) << shoppingList(prices, discounts) << std::endl;
}