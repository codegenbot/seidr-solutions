#include <vector>
#include <iostream>
#include <sstream>

double hoppingList(std::vector<double> prices, std::vector<double> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double discountPercentage = discounts[i]; 
        total += prices[i] * (1.0 - discountPercentage / 100); 
    }
    return total;
}

int main() {
    std::string priceStr;
    double price = 0;
    double discount = 0;
    std::vector<double> prices;
    std::vector<double> discounts;

    while (std::cin >> priceStr) {
        price = std::stod(priceStr);
        prices.push_back(price);
    }

    while (std::cin >> priceStr) {
        discount = std::stod(priceStr);
        discounts.push_back(discount);
    }

    double result = hoppingList(prices, discounts);
    std::cout << "The total price of the shopping trip is: " << result << std::endl;
    return 0;
}