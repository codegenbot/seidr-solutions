#include <vector>
#include <iostream>

double calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
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