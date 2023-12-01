#include <vector>
#include <iostream>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float totalPrice = 0.0;
    int numItems = prices.size();
    
    for (int i = 0; i < numItems; ++i) {
        float discountedPrice = prices[i] * (1 - discounts[i] / 100);
        totalPrice += discountedPrice;
    }
    
    return totalPrice;
}

int main() {
    int numPrices, numDiscounts;
    std::cin >> numPrices;
    
    std::vector<float> prices(numPrices);
    for (int i = 0; i < numPrices; ++i) {
        std::cin >> prices[i];
    }
    
    std::cin >> numDiscounts;
    
    std::vector<float> discounts(numDiscounts);
    for (int i = 0; i < numDiscounts; ++i) {
        std::cin >> discounts[i];
    }
    
    float total = calculateTotalPrice(prices, discounts);
    std::cout << total << std::endl;
    
    return 0;
}