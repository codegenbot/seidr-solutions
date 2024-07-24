#include <vector>
#include <iostream>

using namespace std;

double shoppingList(const vector<float>& prices, const vector<float>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); ++i) {
        total += prices[i] * (1 - discounts[i] / 100.0);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (float& price : prices) {
        cin >> price;
    }
    vector<float> discounts(n);
    for (float& discount : discounts) {
        cin >> discount;
    }
    std::cout << std::fixed << std::setprecision(1) << shoppingList(prices, discounts) << std::endl;
    return 0;
}