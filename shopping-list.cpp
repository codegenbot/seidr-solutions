#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

double shoppingList(double price[], double discount[], int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += price[i] * (1 - discount[i] / 100.0);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<double> prices(n), discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    cout << fixed << setprecision(2) << shoppingList(&*prices.begin(), &*discounts.begin(), n) << endl;
    return 0;
}