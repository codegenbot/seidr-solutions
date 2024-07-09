```cpp
#include <iostream>
#include <iomanip>
#include <vector>

float shoppingList(const std::vector<typename std::allocator<float>::rebind<float>::type>& prices, const std::vector<typename std::allocator<float>::rebind<float>::type>& discounts) {
    float totalPrice = 0;
    for (size_t i = 0; i < prices.size(); ++i) {
        float discountedPrice = prices[i] * (1 - discounts[i] / 100);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    std::vector<typename std::allocator<float>::rebind<float>::type> prices = {(float)10.99, (float)5.99, (float)7.99};
    std::vector<typename std::allocator<float>::rebind<float>::type> discounts = {(float)0, (float)20, (float)15};
    std::cout << std::fixed << std::setprecision(2) << shoppingList(prices, discounts) << std::endl;
}