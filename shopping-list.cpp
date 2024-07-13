#include <vector>
using namespace std;

double shoppingList(double prices[], int n, double discounts[], int m) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100);
        total += price - discount;
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<double> prices(n), discounts(m);
    for (int i = 0; i < n; i++) cin >> prices[i];
    for (int i = 0; i < m; i++) cin >> discounts[i];
    cout << fixed << setprecision(1) << shoppingList(&prices[0], n, &discounts[0], m) << endl;
    return 0;
}