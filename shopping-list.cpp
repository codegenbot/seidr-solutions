#include <vector>
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