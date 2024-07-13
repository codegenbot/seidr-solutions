#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    std::vector<float> prices(n);
    std::vector<float> discounts(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> discounts[i];
    }

    float total_price = 0.0;
    for (int i = 0; i < n; ++i) {
        total_price += prices[i] * (100.0 - discounts[i]) / 100.0;
    }

    total_price = round(total_price * 100) / 100; // Round to two decimal places

    std::cout << "Total price after discounts: " << total_price << std::endl;

    return 0;
}