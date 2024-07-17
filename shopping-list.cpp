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
    std::vector<double> prices;
    int n;
    std::cout << "Enter the number of items: ";
    std::cin >> n;

    std::cout << "Enter the prices and corresponding discounts for each item:\n";
    prices.resize(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Price " << i+1 << ": ";
        std::cin >> prices[i];
        std::cout << "Discount: ";
        std::cin >> discounts[i];
    }
    
    double result = shoppingList(prices, discounts);
    std::cout << "Total price after discount: " << result << std::endl;
    return 0;
}