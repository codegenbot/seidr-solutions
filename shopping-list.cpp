#include <vector>
#include <iostream>
using namespace std;

double shoppingList(vector<float>& prices, vector<float>& discounts) {
    double total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}

int main() {
    vector<float> prices = {10.5, 20.99, 4.87};
    vector<float> discounts = {10, 20, 30};
    cout << "Total: $" << shoppingList(prices, discounts) << endl;
}