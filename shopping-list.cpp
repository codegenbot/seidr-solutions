#include <iostream>
#include <vector>

int main() {
    std::vector<float> prices = {12.72f, 2.69f, 34.4f, 27.85f, 22.36f, 31.04f, 11.14f, 6.97f, 25.34f, 3.05f, 40.18f};
    std::vector<float> discounts = {53.1f, 36.18f, 87.73f, 7.54f, 18.97f, 98.24f, 64.56f, 99.0f, 90.76f, 87.22f, 70.2f};

    float total_price = 0.0f;
    for (int i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1.0f - discounts[i] / 100.0f);
    }

    std::cout << "Total discounted price: " << total_price << std::endl;

    return 0;
}