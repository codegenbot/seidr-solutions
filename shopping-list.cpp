#include <iostream>
#include <vector>
#include <cmath>

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

    float total = 0.0f;
    for (int i = 0; i < n; ++i) {
        total += prices[i] * (1.0f - discounts[i] / 100.0f);
    total = round(total * 100) / 100;
    }

    std::cout << total << "\n";

    return 0;
}