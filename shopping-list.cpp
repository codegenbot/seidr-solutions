```cpp
#include <vector>
#include <limits>
#include <iostream>

int main() {
    std::vector<float> prices;
    std::vector<float> discounts;

    // Read input from user
    int n;
    std::cout << "Enter the number of goods: ";
    std::cin >> n;
    
    prices.resize(n);
    discounts.resize(n);

    for (int i = 0; i < n; i++) {
        std::cout << "Enter price and discount percentage for good " << i+1 << ": ";
        std::cin >> prices[i] >> discounts[i];
    }

    if (prices.size() != discounts.size()) {
        return -std::numeric_limits<double>::infinity(); 
    }
    
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]/100.0); 
    }
    std::cout << "Total price after applying discount: " << total << std::endl;

    return 0;
}