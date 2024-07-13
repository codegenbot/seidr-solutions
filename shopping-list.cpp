#include <iostream>
#include <vector>

double shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i] / 100.0);
    }
    return total;
}

int main() {
    std::vector<float> prices;
    float price;
    while(std::cin >> price) {
        prices.push_back(price);
    }

    int numItems = prices.size();
    std::vector<float> discounts(numItems);
    for (int i = 0; i < numItems; i++) {
        std::cin >> discounts[i];
    }
    
    if (prices.size() != discounts.size()) {
        std::cerr << "Invalid input. Please enter same number of items for both prices and discounts." << std::endl;
        return 1; 
    }
    
    double result = shoppingList(prices, discounts);
    std::cout << "Total price after discount: $" << result << std::endl;
    return 0;
}