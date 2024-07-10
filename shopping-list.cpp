#include <vector>
using namespace std;

double shoppingList(double prices[], double discounts[], int n) {
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
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    cin >> n;
    vector<double> discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    double result = shoppingList(&prices[0], &discounts[0], n);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}