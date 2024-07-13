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
        discounts[i] /= 100; // Convert percentage to decimal
    }

    double total_price = 0.0;
    for (int i = 0; i < n; ++i) {
        total_price += prices[i] * (1.0 - discounts[i]);
    }

    total_price = round(total_price * 100) / 100; // Round to two decimal places

    std::cout << std::fixed << std::setprecision(2) << total_price << "\n";

    return 0;
}