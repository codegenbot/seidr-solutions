```
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<float> prices = {10, 20, 30};
    vector<float> discounts = {0.5, 0.75, 0.9};
    double total = shoppingList(prices, discounts);
    cout << "Total: " << total << endl;
    return 0;
}
```