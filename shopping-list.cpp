#include <iostream>
#include <vector>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += (1 - discounts[i]) * prices[i];
    }
    return total;
}

int main() {
    vector<float> prices({10.99, 5.0, 3.5});
    vector<float> discounts({0.05, 0.08, 0.1});
    double result = shoppingList(prices, discounts);
    cout << "Total price after discount: $" << result << endl;
    return 0;
}