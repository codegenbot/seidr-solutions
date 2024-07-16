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
        total_price += prices[i] * (1.0f - discounts[i] / 100.0f);
    }

    std::cout << total_price << std::endl;

    return 0;
}