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
    std::vector<double> prices = {10.0, 20.0, 30.0};
    std::vector<double> discounts = {5.0, 7.0, 9.0};
    double total = shoppingList(prices, discounts);
    std::cout << "Total cost after discount: $" << total << std::endl;
    return 0;
}