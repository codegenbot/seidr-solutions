```cpp
#include <vector>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += (1 - discounts[i]) * prices[i];
    }
    return total;
}

int main() {
    vector<float> prices = {10.99f, 5.00f, 3.50f};
    vector<float> discounts = {0.05f, 0.08f, 0.10f};
    double result = shoppingList(prices, discounts);
    cout << "Total price after discount: $" << result << endl;
    return 0;
}