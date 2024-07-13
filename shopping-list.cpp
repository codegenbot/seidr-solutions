#include <iostream>
#include <vector>
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
    for (double &price : prices) {
        cin >> price;
    }
    int m;
    cin >> m;
    vector<double> discounts(m);
    for (double &discount : discounts) {
        cin >> discount;
    }
    double result = shoppingList(prices, discounts);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}