#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<float> prices(n);
    std::vector<float> discounts(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }

    float total_price = 0.0f;
    for (int i = 0; i < n; ++i) {
        float discount;
        std::cin >> discount;
        discounts[i] = discount;
        total_price += prices[i] * (1.0f - discount / 100.0f);
    }

    std::cout << "Total discounted price: " << total_price << std::endl;

    return 0;
}