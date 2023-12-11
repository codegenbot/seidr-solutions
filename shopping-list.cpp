#include <vector>
#include <iostream>
#include <string>
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
    vector<float> prices = {50.0, 100.0};
    vector<float> discounts = {10.0, 20.0};
    cout << shoppingList(prices, discounts) << endl;
    return 0;
}