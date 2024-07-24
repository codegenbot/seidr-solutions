#include <iostream>
#include <vector>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        total += prices[i] - prices[i] * discounts[i] / 100;
    }
    return total;
}

int main() {
    std::vector<float> prices;
    std::vector<float> discounts;
    
    int n;
    std::cout << "Enter the number of shopping goods: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        float price, discount;
        std::cout << "Enter price for item " << i + 1 << ": ";
        std::cin >> price;
        std::cout << "Enter discount percentage for item " << i + 1 << ": ";
        std::cin >> discount;
        prices.push_back(price);
        discounts.push_back(discount);
    }

    float total = calculateTotalPrice(prices, discounts);
    std::cout << "Total price after discount: " << total << std::endl;

    return 0;
}