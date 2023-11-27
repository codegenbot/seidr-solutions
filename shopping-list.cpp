#include <iostream>
#include <vector>

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float totalPrice = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float discountedPrice = prices[i] * (100 - discounts[i]) / 100;
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    std::vector<float> prices;
    std::vector<float> discounts;

    std::cout << "Enter prices of shopping goods (separated by spaces): ";
    float price;
    while (std::cin >> price) {
        prices.push_back(price);
    }

    std::cout << "Enter discounts of shopping goods (separated by spaces): ";
    float discount;
    while (std::cin >> discount) {
        discounts.push_back(discount);
    }

    float totalPrice = calculateTotalPrice(prices, discounts);

    std::cout << "Total price after discount: $" << totalPrice << std::endl;

    return 0;
}