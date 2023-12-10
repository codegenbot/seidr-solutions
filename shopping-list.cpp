```
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<float> prices = {10, 20, 30};
    vector<float> discounts = {0.8, 0.9, 1.0};
    double total = shoppingList(prices, discounts);
    cout << "Total: " << total << endl;
    return 0;
}
```
Note: This is the solution for the problem described in the issue. The code needs to define the `main` function as the entry point of the program, which was missing in the original code provided.