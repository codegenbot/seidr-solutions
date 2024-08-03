#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;

    std::vector<float> discounts(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> discounts[i];
    }

    std::vector<float> prices(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }

    float total = 0.0f;
    for (int i = 0; i < n; ++i) {
        total += prices[i] * (1.0f - discounts[i] / 100.0f);
    }

    std::cout << std::fixed << std::setprecision(2) << total << "\n";

    return 0;
}