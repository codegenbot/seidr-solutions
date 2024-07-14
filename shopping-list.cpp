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
    vector<float> prices(3); 
    prices[0] = 10.0; prices[1] = 20.0; prices[2] = 30.0;
    vector<float> discounts(3); 
    discounts[0] = 5.0; discounts[1] = 10.0; discounts[2] = 15.0;
    cout << "Total cost: " << shoppingList(prices, discounts) << endl;
    return 0;
}