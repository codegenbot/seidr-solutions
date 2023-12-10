```cpp
#include <vector>
#include <iostream>
#include <cmath>

double calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    double totalPrice = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        double discountedPrice = round(100 * (prices[i] - (prices[i] * discounts[i] / 100))) / 100;
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        std::cin >> prices[i];
    }

    int m;
    std::cin >> m;

    std::vector<float> discounts(m);
    for (int i = 0; i < m; i++) {
        std::cin >> discounts[i];
    }

    double totalPrice = calculateTotalPrice(prices, discounts);
    std::cout << totalPrice << std::endl;

    return 0;
}
```