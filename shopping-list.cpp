#include <iostream>
#include <vector>
#include <iomanip>

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float totalPrice = 0.0;
    int n = prices.size();

    for (int i = 0; i < n; i++) {
        float discount = discounts[i] / 100.0;
        float discountedPrice = prices[i] * (1 - discount);
        totalPrice += discountedPrice;
    }

    return totalPrice;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> prices;
    for (int i = 0; i < n; i++) {
        float price;
        std::cin >> price;
        prices.push_back(price);
    }

    std::vector<float> discounts;
    for (int i = 0; i < n; i++) {
        float discount;
        std::cin >> discount;
        discounts.push_back(discount);
    }

    float totalPrice = calculateTotalPrice(prices, discounts);
    std::cout << std::fixed << std::setprecision(2) << totalPrice << std::endl;

    return 0;
}