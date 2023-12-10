```
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    vector<float> prices = {10, 20, 30};
    vector<float> discounts = {50, 75, 80};
    double total = shoppingList(prices, discounts);
    cout << "Total: " << total << endl;
    return 0;
}

double shoppingList(vector<float>& prices, vector<float>& discounts) {
    double total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]);
    }
    return total;
}
```