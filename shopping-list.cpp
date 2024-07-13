#include <iostream>
#include <vector>

double calculateTotalPrice(const std::vector<double>& prices, const std::vector<double>& discounts) {
    double total_price = 0.0;
    for (std::size_t i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1.0 - discounts[i] / 100.0);
    }
    return total_price;
}

int main() {
    int n;
    std::cout << "Enter the number of shopping items: ";
    std::cin >> n;

    std::vector<double> prices(n);
    std::vector<double> discounts(n);

    std::cout << "Enter the prices of shopping goods: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }

    std::cout << "Enter the percent discount for each item: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> discounts[i];
    }

    double total_price = calculateTotalPrice(prices, discounts);

    std::cout << "Total price after applying discounts: " << total_price << std::endl;

    return 0;
}