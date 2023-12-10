```
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

int main() {
    std::vector<float> prices;
    std::vector<float> discounts;
    float total = 0.0;
    int n, i;
    cin >> n;

    // Handle case where input is only one item
    if (n == 1) {
        float price, discount;
        cin >> price >> discount;
        prices.push_back(price);
        discounts.push_back(discount);
    } else {
        // Iterate over each item and apply discount to its price before adding it to the total
        for (i = 0; i < n; i++) {
            float price, discount;
            cin >> price >> discount;
            prices.push_back(price);
            discounts.push_back(discount);
            total += std::round((price - (price * discount)) * 100) / 100;
        }
    }

    // Use rounding functions to avoid rounding errors when calculating the final result
    cout << std::round(total * 100) / 100 << endl;
    return 0;
}
```