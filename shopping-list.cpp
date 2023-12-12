```cpp
#include <iostream>
#include <vector>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float totalPrice = 0.0;

    for (size_t i = 0; i < prices.size(); i++) {
        float discountedPrice = prices[i] - (prices[i] * discounts[i] / 100);
        totalPrice += discountedPrice;
    }

    return totalPrice;
}

int main() {
    size_t n;
    std::cin >> n;

    std::vector<float> prices;
    std::vector<float> discounts;

    for (size_t i = 0; i < n; i++) {
        float price;
        std::cin >> price;
        prices.emplace_back(price);
    }

    for (size_t i = 0; i < n; i++) {
        float discount;
        std::cin >> discount;
        discounts.emplace_back(discount);
    }

    float totalPrice = calculateTotalPrice(prices, discounts);
    std::cout << totalPrice << std::endl;

    return 0;
}
```