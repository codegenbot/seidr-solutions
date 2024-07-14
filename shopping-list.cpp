#include <vector>
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
    vector<float> prices = {10, 20, 30};
    vector<float> discounts = {5, 10, 15};
    cout << "Total price after applying discount: $" << shoppingList(prices, discounts) << endl;
    return 0;
}