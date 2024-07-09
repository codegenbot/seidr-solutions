#include <vector>
#include <iostream>
#include <string>
#include <sstream>

double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - (discounts[i] / 100.0));
    }
    return total;
}

int main() {
    std::vector<float> prices;
    std::vector<float> discounts;

    // Read prices
    std::string temp;
    std::getline(std::cin, temp);
    std::istringstream iss(temp);
    float price;
    while (iss >> price) {
        prices.push_back(price);
    }

    // Read discounts
    std::getline(std::cin, temp);
    iss.clear();
    iss.str(temp);
    while (iss >> price) {
        discounts.push_back(price);
    }

    double total = shoppingList(prices, discounts);

    std::cout << "The total price after applying the discount is: $" << total << std::endl;

    return 0;
}