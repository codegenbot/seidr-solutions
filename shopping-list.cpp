```c++
#include <iostream>
#include <vector>
#include <iomanip>
#include <sstream>

float shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float totalPrice = 0;
    for (size_t i = 0; i < prices.size(); ++i) {
        float discountedPrice = prices[i] * (1 - discounts[i] / 100);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    std::vector<float> prices;
    std::vector<float> discounts;

    float price, discount;
    while (std::cin >> price >> discount) {
        if (!(std::cin >> ws).good()) break; 
        prices.push_back(price);
        discounts.push_back(discount / 100.0); 
    }

    std::cout << std::fixed << std::setprecision(2) << shoppingList(prices, discounts) << std::endl;
}