#include <vector>
#include <iostream>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += (1 - discounts[i] / 100.0f) * prices[i];
    }
    return total;
}

int main() {
    vector<float> prices = {10.0, 20.0, 30.0};
    vector<float> discounts = {5.0, 7.0, 9.0};
    cout << shoppingList(prices, discounts) << endl;
    return 0;
}