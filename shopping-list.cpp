#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double shoppingList(vector<double>& prices, vector<double>& discounts, int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += prices[i] * (1 - discounts[i] / 100.0);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<double> prices(n), discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i] >> discounts[i];
    }
    cout << fixed << setprecision(1) << shoppingList(prices, discounts, n) << endl;
    return 0;
}