#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

float shoppingList(vector<float> prices, vector<float> discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float price = prices[i];
        float discount = discounts[i];
        total += (price - (price * discount / 100));
    }
    return total;
}

int main() {
    vector<float> prices = {50.0, 100.0};
    vector<float> discounts = {10.0, 20.0};
    float total = shoppingList(prices, discounts);
    cout << "Total: " << total << endl;
    return 0;
}