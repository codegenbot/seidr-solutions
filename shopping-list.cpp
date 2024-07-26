#include <iostream>
#include <iomanip>
#include <vector>

double calculateTotalPrice(const std::vector<double>& prices, const std::vector<double>& discounts, int num_items) {
    double total_price = 0.0;
    for (size_t i = 0; i < num_items; ++i) {
        total_price += prices[i] * (1.0 - discounts[i] / 100.0);
    }
    return total_price;
}

int main() {
    const int num_items = 11;
    std::vector<double> prices(num_items);
    std::vector<double> discounts(num_items);

    std::cin >> num_items;
    for (int i = 0; i < num_items; ++i) {
        std::cin >> prices[i];
    }
    for (int i = 0; i < num_items; ++i) {
        std::cin >> discounts[i];
    }

    double total_price = calculateTotalPrice(prices, discounts, num_items);

    std::cout << std::fixed << std::setprecision(2) << "Total price after applying discounts: $" << total_price << std::endl;

    return 0;
}