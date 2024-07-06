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
    vector<float> prices = {10.99, 24.50, 8.75};
    vector<float> discounts = {10.0, 20.0, 30.0};
    double total = shoppingList(prices, discounts);
    cout << "Total: " << total << endl;
}