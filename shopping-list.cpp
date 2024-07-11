#include <iostream>
#include <vector>

int main() {
    std::vector<float> prices = {10.0f, 20.0f, 30.0f};
    std::vector<float> discounts = {5.0f, 10.0f, 15.0f};

    float total_price = 0.0f;
    for (int i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1.0f - discounts[i] / 100.0f);
    }

    std::cout << "Total discounted price: " << total_price << std::endl;

    return 0;
}