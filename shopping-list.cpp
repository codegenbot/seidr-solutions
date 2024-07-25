#include <vector>
using namespace std;

double shoppingList(double prices[], int n, double discounts[]) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += prices[i] * (1 - discounts[i] / 100);
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
    
    cout << fixed << setprecision(1) << shoppingList(&prices[0], n, &discounts[0]) << endl;
    
    return 0;
}