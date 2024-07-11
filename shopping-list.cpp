#include <iostream>
#include <vector>

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}

int main() {
    int n;
    std::cout << "Enter the number of items: ";
    std::cin >> n;
    
    std::vector<float> prices(n);
    std::vector<float> discounts(n);
    
    std::cout << "Enter the prices of items: ";
    for (int i = 0; i < n; i++) {
        std::cin >> prices[i];
    }
    
    std::cout << "Enter the discounts for each item: ";
    for (int i = 0; i < n; i++) {
        std::cin >> discounts[i];
    }

    float totalPrice = calculateTotalPrice(prices, discounts);
    
    std::cout << "Total Price after discounts: " << totalPrice << std::endl;

    return 0;
}