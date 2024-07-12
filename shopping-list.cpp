#include <iostream>
#include <vector>
using namespace std;

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        total += prices[i] * (1.0 - discounts[i] / 100.0);
    }
    return total;
}

int main() {
    int numItems;
    std::cin >> numItems;

    std::vector<float> prices(numItems);
    for (int i = 0; i < numItems; ++i) {
        std::cin >> prices[i];
    }

    std::vector<float> discounts(numItems);
    for (int i = 0; i < numItems; ++i) {
        std::cin >> discounts[i];
    }

    float total = calculateTotalPrice(prices, discounts);
    std::cout << total << std::endl;

    return 0;
}