#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<float> prices(n), discounts(n);
    float total = 0.0f;

    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> discounts[i];
        total += prices[i] * (1.0f - discounts[i] / 100.0f);
    }

    std::cout << std::fixed << total << "\n";

    return 0;
}