    #include <iostream>
#include <ostream>
using namespace std;

double shoppingList(const vector<float>& prices, const vector<float>& discounts) {
    return accumulate(prices.begin(), prices.end(), 0.0, [&](double sum, float price) {
        return sum + (price - discounts[static_cast<size_t>(prices.size())]) * (1 - discounts[static_cast<size_t>(prices.size())]);
    });
}

int main() {
    vector<float> prices = {50.0, 100.0};
    vector<float> discounts = {10.0, 20.0};
    double total_cost = shoppingList(prices, discounts);
    cout << "Total cost after discounts: " << total_cost << endl;
    return 0;
}