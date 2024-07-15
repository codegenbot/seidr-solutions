#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<double> prices(n);
    std::vector<double> discounts(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> discounts[i];
    }

    double total = 0.0;
    for (int i = 0; i < n; ++i) {
        total += prices[i] * (1.0 - discounts[i] / 100.0);
    }
    
    std::cout << total << '\n';
    
    return 0;
}