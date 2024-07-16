```c++
#include <iostream>
#include <vector>
#include <iomanip>

float shoppingList(vector<float> prices, vector<float> discounts) {
    float total = 0;
    for (int i = 0; i < prices.size(); i++) {
        float priceAfterDiscount = prices[i] * (1 - discounts[i] / 100);
        total += priceAfterDiscount;
    }
    return total;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> prices(n);
    std::vector<float> discounts(n);
    
    for(int i=0; i<n; i++) {
        std::cin >> prices[i];
        std::cin >> discounts[i];
    }
    
    std::cout << std::fixed << std::setprecision(2) << shoppingList(prices, discounts) << std::endl;
}