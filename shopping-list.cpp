```cpp
#include <vector>
#include <limits>

double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    if (prices.size() != discounts.size()) {
        return -std::numeric_limits<double>::infinity(); 
    }
    
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]/100.0); 
    }
    return total;
}