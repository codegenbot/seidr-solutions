```cpp
#include <vector>
#include <iostream>

double calculateTotalPrice(std::vector<double> prices, std::vector<double> discounts) {
    double total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        double discountedPrice = prices[i] - (prices[i] * discounts[i] / 100);
        total += discountedPrice;
    }
    return total;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<double> prices(n);
    for (int i = 0; i < n; i++) {
        std::cin >> prices[i];
    }

    int m;
    std::cin >> m;
    std::vector<double> discounts(m);
    for (int i = 0; i < m; i++) {
        std::cin >> discounts[i];
    }

    double totalPrice = calculateTotalPrice(prices, discounts);
    std::cout << totalPrice << std::endl;

    return 0;
}
```