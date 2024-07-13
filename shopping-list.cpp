#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

double shoppingList(vector<float>& prices, vector<float>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        float price = prices[i];
        float discount = price * (discounts[i] / 100);
        total += price - discount;
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<float> prices(n), discounts(m);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> discounts[i];
    }
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    return 0;
}