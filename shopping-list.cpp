#include <iostream>
#include <vector>

int main() {
    std::vector<float> prices = {11, 12.72, 2.69, 34.4, 27.85, 22.36, 31.04, 11.14, 6.97, 25.34, 3.05, 40.18};
    std::vector<float> discounts = {53.1, 36.18, 87.73, 7.54, 18.97, 98.24, 64.56, 99.0, 90.76, 87.22, 70.2};

    float total_price = 0.0f;
    for (int i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1.0f - discounts[i] / 100.0f);
    }

    std::cout << "Total discounted price: " << total_price << std::endl;

    return 0;
}