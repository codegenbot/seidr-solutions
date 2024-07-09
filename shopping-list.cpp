#include <vector>
#include <iostream>
#include <string>
#include <sstream>

double shoppingList(std::vector<double> prices, std::vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - (discounts[i] / 100.0));
    }
    return total;
}

int main() {
    std::vector<double> prices;
    std::vector<float> discounts;

    // Read prices
    std::string temp;
    std::getline(std::cin, temp);
    std::istringstream iss(temp);
    double price;
    while (iss >> price) {
        prices.push_back(price);
    }

    // Read discounts
    std::getline(std::cin, temp);
    iss.clear();
    iss.str(temp);
    float discount;
    while (iss >> discount) {
        discounts.push_back(discount / 100.0); 
    }

    double total = shoppingList(prices, discounts);

    std::cout << "The total price after applying the discount is: $" << total << std::endl;

    return 0;
}