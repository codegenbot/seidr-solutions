```cpp
#include <iostream>
#include <vector>
#include <iomanip>

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float totalPrice = 0.0;
    unsigned long n = prices.size();

    for (unsigned long i = 0; i < n; i++) {
        float discount = discounts[i] / 100.0;
        float discountedPrice = prices[i] * (1 - discount);
        totalPrice += discountedPrice;
    }

    return totalPrice;
}

int main() {
    unsigned long n;
    std::cin >> n;

    std::vector<float> prices;
    prices.resize(static_cast<unsigned long>(n));
    for (unsigned long i = 0; i < n; i++) {
        std::cin >> prices[i];
    }

    std::vector<float> discounts;
    discounts.resize(static_cast<unsigned long>(n));
    for (unsigned long i = 0; i < n; i++) {
        std::cin >> discounts[i];
    }

    float totalPrice = calculateTotalPrice(prices, discounts);
    std::cout << std::fixed << std::setprecision(2) << totalPrice << std::endl;

    return 0;
}
```