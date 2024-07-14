#include <vector>
using namespace std;

double shoppingList(double prices[], int n, double discounts[]) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100.0);
        total += price - discount;
    }
    return total;
}

int main() {
    int numItems, numDiscounts;
    cin >> numItems >> numDiscounts;

    double prices[numItems];
    for (int i = 0; i < numItems; i++) {
        cin >> prices[i];
    }

    double discounts[numDiscounts];
    for (int i = 0; i < numDiscounts; i++) {
        cin >> discounts[i];
    }

    cout << fixed << setprecision(1) << shoppingList(&prices[0], numItems, &discounts[0]) << endl;

    return 0;
}