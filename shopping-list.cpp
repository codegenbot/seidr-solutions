#include <iostream>
#include <vector>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total_price = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (100.0f - discounts[i]) / 100.0f;
    }
    return total_price;
}

int main() {
    std::vector<float> prices;
    std::vector<float> discounts;
    float price, discount;
    int num_items;

    std::cout << "Enter the number of items: ";
    std::cin >> num_items;

    std::cout << "Enter the prices of each item: ";
    for (int i = 0; i < num_items; ++i) {
        std::cin >> price;
        prices.push_back(price);
    }

    std::cout << "Enter the discounts for each item: ";
    for (int i = 0; i < num_items; ++i) {
        std::cin >> discount;
        discounts.push_back(discount);
    }

    float total_price = calculateTotalPrice(prices, discounts);

    std::cout << "Total price after applying discounts: $" << total_price << std::endl;

    return 0;
}