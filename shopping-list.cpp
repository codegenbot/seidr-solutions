#include <vector>
#include <iostream>
#include <iomanip>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float totalPrice = 0;
    for (int i = 0; i < prices.size(); i++) {
        totalPrice += prices[i] - (prices[i] * discounts[i] / 100);
    }
    return totalPrice;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        std::cin >> prices[i];
    }
    
    int m;
    std::cin >> m;
    
    std::vector<float> discounts(m);
    for (int i = 0; i < m; i++) {
        std::cin >> discounts[i];
    }
    
    float totalPrice = calculateTotalPrice(prices, discounts);
    std::cout << std::fixed << std::setprecision(2) << totalPrice << std::endl;
    
    return 0;
}