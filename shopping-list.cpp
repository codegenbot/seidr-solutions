#include <iostream>
#include <vector> 
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    std::vector<double> prices(n);
    std::vector<double> discounts(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> discounts[i];
    }

    double total_price = 0.0;

    for (int i = 0; i < n; ++i) {
        double discounted_price = std::round(prices[i] * (100.0 - discounts[i]) / 100.0 * 100) / 100;
        total_price += discounted_price;
    }

    std::cout << "Total discounted price: " << std::fixed << total_price << std::endl;

    return 0;
}