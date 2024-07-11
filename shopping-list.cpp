#include <iostream>
#include <vector>
#include <iomanip>
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
        total_price += prices[i] * (1.0 - discounts[i] / 100.0);
    }

    total_price = round(total_price * 100) / 100;

    std::cout << std::fixed << std::setprecision(2) << "Total discounted price: " << total_price << std::endl;

    return 0;
}