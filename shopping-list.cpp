#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]);
    }
    return total;
}

int main() {
    vector<float> prices = {10, 20, 30};
    vector<float> discounts = {0.1, 0.2, 0.3};
    double total = shoppingList(prices, discounts);
    cout << "Total: " << total << endl;
    return 0;
}