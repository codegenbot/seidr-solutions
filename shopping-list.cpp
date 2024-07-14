```c++
#include <vector>
#include <initializer_list>
#include <iostream>

using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i] / 100.0);
    }
    return total;
}

int main() {
    vector<float> prices({10.0f, 20.0f, 30.0f});
    vector<float> discounts({5.0f, 10.0f, 15.0f});
    cout << "Total cost: " << shoppingList(prices, discounts) << endl;
    return 0;
}