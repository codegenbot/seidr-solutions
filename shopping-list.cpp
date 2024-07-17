```cpp
#include <vector>
#include <cmath>

double shoppingList(std::vector<double> prices, std::vector<double> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]/100.0); 
    }
    return total;
}

int main() {
    std::vector<double> prices({10.0, 20.0, 30.0});
    std::vector<double> discounts({5.0, 10.0, 15.0});
    double result = shoppingList(prices, discounts);
    return 0;
}