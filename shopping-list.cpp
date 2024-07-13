#include <iostream>
#include <iomanip>
#include <vector>

double calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    double total_price = 0.0;
    for (std::size_t i = 0; i < prices.size(); i++) {
        total_price += prices[i] * (1.0 - discounts[i] / 100.0); // Apply discount as multiplication factor
    }
    return total_price;
}

int main() {
    int num_items;
    std::cout << "Input the number of items: ";
    std::cin >> num_items;

    std::vector<float> prices(num_items);
    std::cout << "Input the prices of the items: ";
    for (int i = 0; i < num_items; i++) {
        std::cin >> prices[i];
    }

    std::vector<float> discounts(num_items);
    std::cout << "Input the discount percentages corresponding to each item: ";
    for (int i = 0; i < num_items; i++) {
        std::cin >> discounts[i];
    }

    double total = calculateTotalPrice(prices, discounts);
    std::cout << std::fixed << std::setprecision(2) << "Total price after discounts: " << total << std::endl;

    return 0;
}