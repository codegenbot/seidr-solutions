```
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double calculateTotalPrice(vector<float>& prices, vector<float>& discounts) {
    double total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float price = prices[i];
        float discount = discounts[i];
        total += price * (1 - discount);
    }
    return total;
}
```