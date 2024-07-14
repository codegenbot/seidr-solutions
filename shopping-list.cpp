#include <vector>
#include <initializer_list>
#include <iostream>

using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i] / 100.0);
    }
    return total;
}

int main() {
    int numItems;
    cin >> numItems;

    vector<float> prices(numItems);
    for (float &price : prices) {
        cin >> price;
    }

    int secondNumber;
    cin >> secondNumber;

    vector<float> discounts(secondNumber);
    for (float &discount : discounts) {
        cin >> discount;
    }

    cout << "Total cost: " << shoppingList(prices, discounts) << endl;
    return 0;
}