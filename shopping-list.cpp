#include <vector>
using namespace std;

double shoppingList(double price[], int n, double discount[]) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        double discountedPrice = price[i] * (1 - discount[i] / 100);
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
    int m;
    cin >> m;
    double discount[m];
    for (int i = 0; i < m; i++) {
        cin >> discount[i];
    }
    cout << fixed << setprecision(1) << shoppingList(price, n, discount) << endl;
    return 0;
}