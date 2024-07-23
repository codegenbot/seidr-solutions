```cpp
#include <iostream>

double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * (1 - discounts[i] / 100.0);
        total += discount; 
    }
    return total;
}

int main() {
    std::vector<float> prices;
    float price;
    while(std::cin >> price) {
        prices.push_back(price);
    }

    std::vector<float> discounts;
    float discount;
    while(std::cin >> discount) {
        discounts.push_back(discount);
    }
    
    double result = shoppingList(prices, discounts);
    std::cout << "Total price after applying the discount is: $" << result << std::endl;
    return 0; }