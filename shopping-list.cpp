#include <iostream>
#include <vector>
#include <iomanip>

double calculateTotalPrice(const std::vector<double>& prices, const std::vector<double>& discounts) {
    if (prices.size() != discounts.size()) {
        return 0.0;
    }

    double total_price = 0.0;
    for (std::size_t i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1.0 - discounts[i] / 100.0);
    }
    return total_price;
}

int main() {
    std::vector<double> prices;
    std::vector<double> discounts;
    int n;

    while (std::cin >> n) {
        double val;
        for (int i = 0; i < n; ++i) {
            std::cin >> val;
            prices.push_back(val);
        }

        for (int i = 0; i < n; ++i) {
            std::cin >> val;
            discounts.push_back(val);
        }

        double total = calculateTotalPrice(prices, discounts);

        std::cout << std::fixed << std::setprecision(2) << "Total price after discount: " << total << std::endl;

        prices.clear();
        discounts.clear();
    }

    return 0;
}