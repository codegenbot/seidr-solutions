#include <vector>
#include <iostream>

using namespace std;

double shoppingList(double prices[], double discounts[], int n) {
    double total = 0.0;
    for (int i = 0; i < n; i++) {
        total += prices[i] * (1 - discounts[i] / 100.0);
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

    double discounts[n];
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    
    cout << fixed << setprecision(1) << shoppingList(&prices[0], &discounts[0], n) << endl;
    
    return 0;
}