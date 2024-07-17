```cpp
#include <vector>
#include <cmath>
#include <sstream>
#include <string>

double shoppingList(std::vector<double> prices, std::vector<double> discounts) {
    if (prices.size() != discounts.size()) {
        return -1;
    }
    
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]/100.0); 
    }
    return total;
}

int main() {
    std::string input1, input2;
    std::getline(std::cin, input1);
    std::istringstream iss1(input1);
    double price;
    std::vector<double> prices;
    while (iss1 >> price) {
        prices.push_back(price);
    }

    std::getline(std::cin, input2);
    std::istringstream iss2(input2);
    std::vector<double> discounts;
    while (iss2 >> price) {
        discounts.push_back(price);
    }
    
    double result = shoppingList(prices, discounts);
    return 0;
}