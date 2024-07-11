#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<float> prices(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }
    
    std::vector<float> discounts(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> discounts[i];
    }
    
    float total = 0.0;
    for (int i = 0; i < n; ++i) {
        total += prices[i] - (prices[i] * discounts[i] / 100.0);
    }
    
    std::cout << total << std::endl;
    
    return 0;
}