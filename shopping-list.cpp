```cpp
#include <iostream>
#include <vector>

std::vector<float> prices;
std::vector<float> discounts;

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
    prices.push_back(10.0f); prices.push_back(20.0f); prices.push_back(30.0f);
    discounts.push_back(5.0f); discounts.push_back(10.0f); discounts.push_back(15.0f);

    double result = shoppingList(prices, discounts);
    std::cout << "Total price after applying the discount is: $" << result << std::endl;
    return 0;
}