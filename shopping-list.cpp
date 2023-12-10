```
#include <vector>
#include <iostream>

using namespace std;

double shoppingList(vector<float>& prices, vector<float>& discounts) {
    double total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]);
    }
    return total;
}

int main() {
    vector<float> prices{1, 2, 3, 4, 5};
    vector<float> discounts{0.1, 0.2, 0.3, 0.4, 0.5};
    double total = shoppingList(prices, discounts);
    cout << "The total cost is: " << total << endl;
    return 0;
}
```