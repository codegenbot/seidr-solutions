```
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

double shoppingList(vector<float>& prices, vector<float>& discounts) {
    double total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float price = prices[i];
        float discount = discounts[i];
        total += price * (1 - discount / 100);
    }
    return total;
}
```