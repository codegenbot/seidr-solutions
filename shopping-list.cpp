
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
    vector<float> prices{};
    vector<float> discounts{};
    double total;
    cout << "Enter the price of each shopping item: ";
    cin >> prices;
    cout << "Enter the percent discount of each shopping item: ";
    cin >> discounts;
    total = shoppingList(prices, discounts);
    cout << "The total cost of your shopping trip is: $" << total << endl;
    return 0;
}