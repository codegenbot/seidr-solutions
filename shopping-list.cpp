Here is the modified code with the requested changes:
```
#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    std::vector<float> prices;
    std::vector<float> discounts;
    float total = 0.0;
    int n, i;
    std::cin >> n;
    for (i = 0; i < n; i++) {
        float price, discount;
        std::cin >> price >> discount;
        prices.push_back(price);
        discounts.push_back(discount);
    }
    for (i = 0; i < n; i++) {
        total += prices[i] * (1 - discounts[i] / 100.0);
    }
    std::cout << std::fixed << std::setprecision(2) << total << std::endl;
    return 0;
}
```