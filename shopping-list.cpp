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
    vector<float> inputs;
    float num;
    cin >> num; // Read the number of items
    for (int i = 0; i < num; i++) {
        cin >> num; // Read each item's price and discount, separated by spaces
        inputs.push_back(num);
    }
    vector<float> prices;
    vector<float> discounts;
    for (int i = 0; i < num * 2; i += 2) { 
        if(i % 2 == 0)
            prices.push_back(inputs[i]);
        else
            discounts.push_back(inputs[i]);
    }
    cout << shoppingList(prices, discounts) << endl;
    return 0;
}