#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

double shopping_list(const vector<float>& prices, const vector<float>& discounts) {
    double total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}
```
The code defines a function `shopping_list` that takes two vectors as input: `prices` and `discounts`. The function calculates the total price of the shopping trip by iterating over each item in the `prices` vector, applying the corresponding discount from the `discounts` vector, and adding the result to a running total.

The function returns the final value of the `total` variable, which represents the total price of the shopping trip after all discounts have been applied.