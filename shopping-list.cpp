#include <vector>
using namespace std;

double shoppingList(double price[], int n, double discount[]) {
    double totalPrice = 0;
    for (int i = 0; i < n; i++) {
        double originalPrice = price[i];
        double discountedPrice = originalPrice * (1 - discount[i] / 100.0);
        totalPrice += discountedPrice;
    }
    return totalPrice;
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

    cout << fixed << setprecision(1) << shoppingList(&prices[0], n, &discounts[0]) << endl;

    return 0;
}