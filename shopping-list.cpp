#include <vector>
#include <iostream>
#include <cmath> // include this for std::round

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total = 0.0f;
    for (int i = 0; i < prices.size(); ++i) {
        total += prices[i] * (1.0f - discounts[i] / 100.0f);
    }
    return std::round(total); // round the total before returning
}