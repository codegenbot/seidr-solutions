```
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discountAmount = price * (discounts[i] / 100.0);
        total += price - discountAmount;
    }
    return setprecision(6) << fixed << total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    cin.ignore();
    cin >> n;
    vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    cout << shoppingList(prices, discounts) << endl;
}