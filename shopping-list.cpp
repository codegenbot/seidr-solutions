#include <vector>
using namespace std;

double shoppingList(double prices[], int n, double discounts[]) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        double price = prices[i];
        double discount = price * discounts[i] / 100.0;
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
    int m;
    cin >> m;
    vector<double> discounts(m);
    for (double &discount : discounts) {
        cin >> discount;
    }
    double total = shoppingList(&prices[0], n, &discounts[0]);
    cout << fixed << setprecision(1) << total << endl;
    return 0;
}