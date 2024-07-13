#include <vector>
#include <cmath>
#include <iostream>

double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]);
    }
    return total;
}

int main() {
    std::vector<float> prices;
    float price;
    while(std::cin >> price) {
        prices.push_back(price);
    }

    float temp; // added this line
    std::cin >> temp;

    std::vector<float> discounts;
    while(std::cin >> price) {
        discounts.push_back(price / 100.0); 
    }
    
    double result = shoppingList(prices, discounts);
    std::cout << "Total price after discount: $" << result << std::endl;
    return 0;
}