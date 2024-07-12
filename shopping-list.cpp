#include <iostream>
#include <vector>

int main() {
    std::vector<float> prices;
    std::vector<float> discounts;

    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        float price, discount;
        std::cin >> price >> discount;
        prices.push_back(price);
        discounts.push_back(discount);
    }

    float total_price = 0;

    for (int i = 0; i < n; ++i) {
        total_price += prices[i] * (100 - discounts[i]) / 100;
    }

    std::cout << total_price << std::endl;

    return 0;
}