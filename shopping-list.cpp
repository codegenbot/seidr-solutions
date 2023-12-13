```cpp
#include <iostream>
#include <iomanip>
#include <vector>

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float totalPrice = 0.0;
    size_t n = prices.size();

    for (size_t i = 0; i < n; i++) {
        float discount = discounts[i] / 100.0;
        float discountedPrice = prices[i] * (1 - discount);
        totalPrice += discountedPrice;
    }

    return totalPrice;
}

int main() {
    size_t n;
    std::cin >> n;

    std::vector<float> prices(n);
    for (size_t i = 0; i < n; i++) {
        std::cin >> prices[i];
    }

    std::vector<float> discounts(n);
    for (size_t i = 0; i < n; i++) {
        std::cin >> discounts[i];
    }

    float totalPrice = calculateTotalPrice(prices, discounts);
    std::cout << std::fixed << std::setprecision(2) << totalPrice << std::endl;

    return 0;
}
```