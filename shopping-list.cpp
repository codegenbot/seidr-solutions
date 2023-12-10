#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float price = prices[i];
        float discount = discounts[i];
        total += price * (1 - discount);
    }
    return total;
}

int main() {
    vector<float> prices = {50.0, 20.0, 30.0};
    vector<float> discounts = {10.0, 20.0, 95.0};
    double total = shoppingList(prices, discounts);
    cout << "Total: " << total << endl;
    return 0;
}