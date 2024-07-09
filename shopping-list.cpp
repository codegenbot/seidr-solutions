#include <vector>
using namespace std;

double shoppingList(double prices[], int n, double discount[]) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        double price = prices[i];
        double disc = discount[i] / 100.0;
        total += price * (1 - disc);
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
    cin >> n;
    vector<double> discount(n);
    for (double &disc : discount) {
        cin >> disc;
    }
    double result = shoppingList(&prices[0], n, &discount[0]);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}