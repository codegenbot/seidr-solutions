```cpp
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

double shoppingList(double prices[], double discounts[], int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        double price = prices[i];
        double discount = price * discounts[i] / 100;
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
    vector<double> discounts(n);
    for (double &discount : discounts) {
        cin >> discount;
    }
    cout << fixed << setprecision(1) << shoppingList(&prices[0], &discounts[0], n) << endl;
    return 0;
}