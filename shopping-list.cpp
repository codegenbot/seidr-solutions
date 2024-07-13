#include <vector>
#include <cmath>
#include <iostream>

double calculateTotalPrice(const std::vector<double>& prices, const std::vector<double>& discounts) {
    double total_price = 0.0;
    for (std::size_t i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1.0 - (discounts[i] / 100.0));
    }
    return std::round(total_price * 100) / 100;
}

int main() {
    // Example usage
    std::vector<double> prices = {10.0, 20.0, 30.0};
    std::vector<double> discounts = {10.0, 15.0, 20.0};

    double totalPrice = calculateTotalPrice(prices, discounts);
    std::cout << "Total Price after applying discounts: $" << totalPrice << std::endl;

    return 0;
}