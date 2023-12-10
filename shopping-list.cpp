#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float discountedPrice = prices[i] * (1 - discounts[i]);
        cout << "Item " << i + 1 << ": " << prices[i] << " x " << (100 - discounts[i]) / 100.0 << " = " << discountedPrice << endl;
        total += discountedPrice;
    }
    return total;
}
int main() {
    vector<float> prices{50, 100};
    vector<float> discounts{10, 20};
    cout << "The total cost of the shopping list is: " << shoppingList(prices, discounts) << endl;
    return 0;
}