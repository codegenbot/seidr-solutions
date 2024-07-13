#include <vector>
using namespace std;

double shoppingList(double prices[], int n, double discounts[]) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += prices[i] * (1 - discounts[i] / 100.0);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<double> prices(n);
    for (double &p : prices) {
        cin >> p;
    }
    vector<double> discounts(n);
    for (double &d : discounts) {
        cin >> d;
    }
    double result = shoppingList(&prices[0], n, &discounts[0]);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}