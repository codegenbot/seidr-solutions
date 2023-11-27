#include <vector>
#include <iostream>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float totalPrice = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float discountedPrice = prices[i] - (prices[i] * (discounts[i] / 100.0));
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    int numItems;
    std::cin >> numItems;
    
    std::vector<float> prices(numItems);
    for (int i = 0; i < numItems; i++) {
        std::cin >> prices[i];
    }
    
    std::vector<float> discounts(numItems);
    for (int i = 0; i < numItems; i++) {
        std::cin >> discounts[i];
    }
    
    float totalPrice = calculateTotalPrice(prices, discounts);
    std::cout << totalPrice << std::endl;
    
    return 0;
}