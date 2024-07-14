```cpp
#include <vector>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i] / 100.0);
    }
    return total;
}

int main() {
    vector<float> prices({10.0, 20.0, 30.0});
    vector<float> discounts({5.0, 10.0, 15.0});
    cout << "Total cost: " << shoppingList(prices, discounts) << endl;
    return 0;
}