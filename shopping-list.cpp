#include <vector>
using namespace std;

double shoppingList(double prices[], double discounts[], int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100.0);
        double discountedPrice = price - discount;
        if (discountedPrice < 0) {
            discountedPrice = 0;
        }
        total += discountedPrice;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    double prices[n];
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    cin >> n;
    double discounts[n];
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    cout << fixed << setprecision(1) << shoppingList(&prices[0], &discounts[0], n) << endl;
    return 0;
}