#include <vector>
#include <iostream>

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float total = 0.0;
    int n = prices.size();
    
    for(int i=0; i<n; i++) {
        total += prices[i] - (prices[i] * discounts[i] / 100.0);
    }
    
    return total;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<float> prices(n);
    for(int i=0; i<n; i++) {
        std::cin >> prices[i];
    }
    
    std::vector<float> discounts(n);
    for(int i=0; i<n; i++) {
        std::cin >> discounts[i];
    }
    
    float totalPrice = calculateTotalPrice(prices, discounts);
    std::cout << totalPrice << std::endl;
    
    return 0;
}