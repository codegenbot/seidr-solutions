#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<double> prices(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }

    std::vector<int> discounts(n); // Change data type to int
    for (int i = 0; i < n; ++i) {
        std::cin >> discounts[i];
    }

    double total_price = 0.0;
    for (int i = 0; i < n; ++i) {
        total_price += prices[i] * (1.0 - static_cast<double>(discounts[i]) / 100.0); // Cast discounts to double
    }

    std::cout << std::fixed << total_price << std::endl;

    return 0;
}