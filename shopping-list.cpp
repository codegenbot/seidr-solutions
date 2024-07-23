#include <iostream>
#include <vector>

float calculateTotalPrice(std::vector<float> prices, std::vector<int> discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        float discounted_price = prices[i] * (1.0 - discounts[i] / 100.0);
        total += discounted_price;
    }
    return total;
}

int main() {
    std::vector<float> prices = {36.73, 44.51, 27.58, 6.67};
    std::vector<int> discounts = {4, 94, 73, 54};

    std::cout << "Total Price after discounts: " << calculateTotalPrice(prices, discounts) << std::endl;

    return 0;
}