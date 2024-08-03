#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<float> prices = {10.0f, 20.0f, 30.0f}; // Example prices
    std::vector<float> discounts = {5.0f, 10.0f, 15.0f}; // Example discounts
    
    float total = 0.0f;
    for (int i = 0; i < n; ++i) {
        total += prices[i] * (1.0f - discounts[i] / 100.0f);
    }
    
    std::cout << total << std::endl;
    
    return 0;
}