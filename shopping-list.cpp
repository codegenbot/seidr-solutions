#include <iostream>
#include <vector>

float applyDiscount(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        std::cin >> prices[i];
    }
    
    std::vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        std::cin >> discounts[i];
    }
    
    float total = applyDiscount(prices, discounts);
    std::cout << total << std::endl;
    
    return 0;
}