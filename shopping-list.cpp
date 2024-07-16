#include <iostream>
#include <vector>

int main() {
    double total = 0.0;
    int nPrices, nDiscounts;

    std::cin >> nPrices >> nDiscounts;

    std::vector<float> prices(nPrices);
    std::vector<float> discounts(nPrices);

    for (int i = 0; i < nPrices; i++) {
        std::cin >> prices[i];
        if(i<nDiscounts) {
            std::cin >> discounts[i];
        }
    }

    total = 0.0;
    for (int i = 0; i < nPrices; i++) {
        if(i<nDiscounts)
            total += prices[i] - (prices[i] * (discounts[i] / 100.0));
        else
            total += prices[i];
    }

    return static_cast<int>(total);
}