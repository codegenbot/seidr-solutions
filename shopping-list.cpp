#include <iostream>
#include <vector>

int main() {
    double total = 0.0;
    int nPrices, nDiscounts;

    std::cin >> nPrices >> nDiscounts;

    std::vector<float> prices(nPrices);
    std::vector<float> discounts(nDiscounts);

    for (int i = 0; i < nPrices; i++) {
        std::cin >> prices[i];
    }

    for (int i = 0; i < nDiscounts; i++) {
        std::cin >> discounts[i];
    }

    total = 0.0;
    for (int i = 0; i < nPrices; i++) {
        total += prices[i] - (prices[i] * (discounts[i % nDiscounts] / 100.0));
    }

    return static_cast<int>(total);
}