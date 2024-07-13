#include <iostream>
#include <vector>

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float total = 0;
    for (int i = 0; i < prices.size(); ++i) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}

int main() {
    std::vector<float> prices;
    std::vector<float> discounts;
    
    int n;
    std::cout << "Enter the number of items: ";
    std::cin >> n;

    std::cout << "Enter prices: ";
    for (int i = 0; i < n; ++i) {
        float price;
        std::cin >> price;
        prices.push_back(price);
    }

    std::cout << "Enter discounts in percentage: ";
    for (int i = 0; i < n; ++i) {
        float discount;
        std::cin >> discount;
        discounts.push_back(discount);
    }

    std::cout << "Total price after discounts: " << calculateTotalPrice(prices, discounts) << std::endl;
    return 0;
}