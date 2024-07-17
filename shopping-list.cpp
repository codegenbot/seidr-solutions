#include <vector>

double shoppingList(std::vector<double> prices, std::vector<double> discounts) {
    if (prices.size() != discounts.size()) {
        return -std::numeric_limits<double>::infinity(); 
    }
    
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]/100.0); 
    }
    return total;
}