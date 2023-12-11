#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<float> prices = {10.99, 5.99, 3.99};
    vector<float> discounts = {0.1, 0.2, 0.3};

    double total = shoppingList(prices, discounts);
    cout << "Total: " << total << endl;

    return 0;
}
```