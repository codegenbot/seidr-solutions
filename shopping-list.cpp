#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;

    std::vector<double> prices(n);
    std::vector<double> discounts(n);

    double total_price = 0.0;

    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> discounts[i];
        total_price += prices[i] * (1.0 - (discounts[i] / 100.0));
    }

    std::cout << std::fixed << std::setprecision(2) << "Total discounted price: " << total_price << std::endl;

    return 0;
}