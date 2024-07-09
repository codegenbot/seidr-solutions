#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

double shoppingList(vector<double> prices, vector<double> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100);
        total += price - discount;
    }
    return total;
}

int main() {
    int n;
    cin >> n;

    vector<double> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    vector<double> discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }

    double result = shoppingList(prices, discounts);

    cout << fixed << setprecision(1) << result << endl;

    return 0;
}