```cpp
#include <vector>
#include <iomanip>

int main() {
    double total = 0.0;
    float prices[100]; 
    float discounts[100];

    int nPrices, nDiscounts;
    cin >> nPrices >> nDiscounts;

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

    return static_cast<int>(total);
}