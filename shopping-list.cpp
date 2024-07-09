```c++
#include <iostream>
#include <vector>
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
    int n;
    std::cout << "Enter the number of items: ";
    std::cin >> n;

    std::vector<float> prices(n, 0), discounts(n, 0);

    for (size_t i = 0; i < n; ++i) {
        std::cout << "Enter price and discount for item " << i + 1 << ": ";
        std::cin >> prices[i] >> discounts[i];
    }

    std::cout << std::fixed << std::setprecision(2) << shoppingList(prices, discounts) << std::endl;
}