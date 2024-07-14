#include <vector>
using namespace std;

double shoppingList(double price[], int n, double discount[]) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        double amount = price[i] - (price[i] * discount[i] / 100);
        if (amount < 0) {
            amount = 0;
        }
        total += amount;
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
    cin >> n;
    vector<double> discounts(n);
    for (double &d : discounts) {
        cin >> d;
    }
    double result = shoppingList(&prices[0], n, &discounts[0]);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}