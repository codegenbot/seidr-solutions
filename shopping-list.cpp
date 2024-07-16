#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<float> prices(n);
    std::vector<float> discounts(n);
    
    float total_price = 0.0f;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }
    
    for (int i = 0; i < n; ++i) {
        std::cin >> discounts[i];
        total_price += prices[i] * (100 - discounts[i]) / 100.0f;
    }
    
    std::cout << std::fixed << std::setprecision(2) << total_price << std::endl;
    return 0;
}