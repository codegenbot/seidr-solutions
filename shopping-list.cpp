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
        total_price += prices[i] * (100.0 - discounts[i]) / 100.0;
    }

    std::cout << std::fixed << std::setprecision(2) << total_price << std::endl;

    return 0;
}