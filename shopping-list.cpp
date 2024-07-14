#include <vector>
#include <iostream>

using namespace std;

double shoppingList(double price[], int n, double discount[]) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        double discountedPrice = price[i] - (price[i] * discount[i] / 100);
        if (discountedPrice < 0) {
            discountedPrice = 0;
        }
        total += discountedPrice;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    
    double price[n];
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    double discount[n];
    for (int i = 0; i < n; i++) {
        cin >> discount[i];
    }
    
    cout << fixed << setprecision(1) << shoppingList(price, n, discount) << endl;
    
    return 0;
}