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
    int numItems, numDiscounts;
    cin >> numItems >> numDiscounts;

    vector<double> prices(numItems);
    for (double &price : prices) {
        cin >> price;
    }

    vector<double> discounts(numDiscounts);
    for (double &discount : discounts) {
        cin >> discount;
    }

    double result = shoppingList(&prices[0], numItems, &discounts[0]);
    cout << fixed << setprecision(1) << result << endl;

    return 0;
}