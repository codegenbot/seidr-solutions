#include <iostream>
#include <vector>

int main() {
    double total = 0.0;
    std::vector<float> prices; 
    std::vector<float> discounts;

    int nPrices, nDiscounts;
    cin >> nPrices >> nDiscounts;

    prices.resize(nPrices);
    discounts.resize(nDiscounts);

    for (int i = 0; i < nPrices; i++) {
        cin >> prices[i];
    }

    for (int i = 0; i < nDiscounts; i++) {
        cin >> discounts[i];
    }

    total = 0.0;
    for (int i = 0; i < nPrices; i++) {
        total += prices[i] - (prices[i] * (discounts[i] / 100.0));
    }

    std::cout << total;
}