#include <vector>
using namespace std;

double shoppingList(double prices[], int n, double discounts[], int m) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += prices[i] * (1 - discounts[m-1]/100.0);
        m--;
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    double prices[n];
    double discounts[m];

    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> discounts[i];
    }
    
    cout << fixed << setprecision(1) << shoppingList(&prices[0], n, &discounts[0], m) << endl;
    
    return 0;
}