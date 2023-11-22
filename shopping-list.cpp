#include <vector>
#include <iostream>

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float totalPrice = 0.0;
    int n = prices.size();

    for (int i = 0; i < n; i++) {
        float discountAmount = prices[i] * discounts[i] / 100;
        float discountedPrice = prices[i] - discountAmount;
        totalPrice += discountedPrice;
    }

    return totalPrice;
}

int main() {
    int numItems;
    std::cout << "Enter the number of items: ";
    std::cin >> numItems;

    std::vector<float> prices(numItems);
    std::vector<float> discounts(numItems);

    std::cout << "Enter the prices of the items: ";
    for (int i = 0; i < numItems; i++) {
        std::cin >> prices[i];
    }

    std::cout << "Enter the discounts for the items: ";
    for (int i = 0; i < numItems; i++) {
        std::cin >> discounts[i];
    }

    float totalPrice = calculateTotalPrice(prices, discounts);
    std::cout << "Total price after discount: " << totalPrice << std::endl;

    return 0;
}