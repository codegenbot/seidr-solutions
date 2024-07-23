```cpp
#include <vector>
#include <cmath>

double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0;
    
    for (int i = 0; i < prices.size(); i++) {
        if (prices[i] > 0.0f) { 
            double originalPrice = prices[i];
            double discountAmount = originalPrice * (discounts[i]/100.0);
            total += originalPrice - discountAmount;
        }
    }
    
    return total;
}