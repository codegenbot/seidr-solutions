```cpp
#include <iostream>
#include <vector>
#include <limits>

int main() {
    std::vector<float> prices;
    std::vector<float> discounts;

    // Read input from user
    int n;
    std::cout << "Enter the number of items: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        float price, discount;
        std::cout << "Enter price and discount for item " << i + 1 << ": ";
        std::cin >> price >> discount;
        prices.push_back(price);
        discounts.push_back(discount);
    }

    if (prices.size() != discounts.size()) {
        return -std::numeric_limits<double>::infinity(); 
    }
    
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]/100.0); 
    }
    std::cout << "Total price after discount: $" << total << "\n";
    
    return 0;
}