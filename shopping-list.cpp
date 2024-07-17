#include <vector>
using namespace std;

double shoppingList(double prices[], int n, double discounts[]) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        double price = prices[i];
        double discount = discounts[i] / 100.0; // convert percent to fraction
        double discountedPrice = price * (1 - discount);
        total += discountedPrice;
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
    vector<double> discounts(n);
    for (double &discount : discounts) {
        cin >> discount;
    }
    double result = shoppingList(&prices[0], n, &discounts[0]);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}