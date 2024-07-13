#include <vector>
#include <iostream>

using namespace std;

double shoppingList(double prices[], int n, double discounts[]) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        double price = prices[i];
        double discount = discounts[i] / 100.0; // convert percent to decimal
        double amount = price * (1 - discount); // calculate discounted price
        total += amount;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    double prices[n];
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    int m;
    cin >> m;
    double discounts[m];
    for (int i = 0; i < m; i++) {
        cin >> discounts[i];
    }
    cout << fixed << setprecision(1) << shoppingList(&prices[0], n, &discounts[0]) << endl;
    return 0;
}