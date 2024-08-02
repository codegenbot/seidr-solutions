#include <vector>
using namespace std;

double shoppingList(double price[], double discount[], int n) {
    double total_price = 0.0;
    for(int i = 0; i < n; i++) {
        double discounted_price = price[i] * (1 - (discount[i]/100));
        total_price += discounted_price;
    }
    return total_price;
}

int main() {
    int n;
    cin >> n;

    double prices[n];
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    double discounts[n];
    for(int i = 0; i < n; i++) {
        cin >> discounts[i];
    }

    cout << fixed << setprecision(1) << shoppingList(prices, discounts, n) << endl;

    return 0;
}