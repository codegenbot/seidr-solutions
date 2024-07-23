#include <iostream>
#include <vector>

int main() {
    std::vector<float> prices = {10.0, 20.0, 30.0};
    std::vector<float> discounts = {5.0, 10.0, 15.0};
    float total = 0.0;

    for (int i = 0; i < prices.size(); ++i) {
        total += prices[i] * (1.0 - discounts[i] / 100.0);
    }

    std::cout << total << std::endl;

    return 0;
}