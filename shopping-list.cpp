#include <vector>
using namespace std;

double shoppingList(double price[], int n, double discount[]) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        double p = price[i];
        double d = discount[i] / 100.0; // convert percent to decimal
        double afterDiscount = p * (1 - d);
        total += afterDiscount;
    }
    return total;
}

int main() {
    int n;
    cin >> n;

    vector<double> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    vector<double> discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }

    double result = shoppingList(&prices[0], n, &discounts[0]);
    cout << fixed << setprecision(1) << result << endl;

    return 0;
}