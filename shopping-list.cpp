#include <iostream>
#include <vector>
#include <iomanip>

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
        total_price += prices[i] - prices[i] * discounts[i] / 100.0;
    }

    std::cout << "Total discounted price: " << std::fixed << std::setprecision(2) << total_price << std::endl;

    return 0;
}