```
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

double shoppingList(const vector<float>& prices, const vector<float>& discounts) {
    double total = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}
```