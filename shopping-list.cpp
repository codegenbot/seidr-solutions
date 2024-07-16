#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<float> prices(n);
    std::vector<float> discounts(n);
    float total = 0.0;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }
    
    for (int i = 0; i < n; ++i) {
        std::cin >> discounts[i];
    }
    
    for (int i = 0; i < n; ++i) {
        total += prices[i] * (100.0 - discounts[i]) / 100.0;
    }
    
    std::cout << total << std::endl;
    
    return 0;
}