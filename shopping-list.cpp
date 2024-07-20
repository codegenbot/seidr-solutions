#include <vector>
using namespace std;

double shoppingTrip(double prices[], int n, double discounts[]) {
    double totalPrice = 0;
    for (int i = 0; i < n; i++) {
        double price = prices[i];
        double discount = discounts[i] / 100.0;
        double discountedPrice = price * (1 - discount);
        totalPrice += discountedPrice;
    }
    return totalPrice;
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

    cout << fixed << setprecision(1) << shoppingTrip(prices, numItems, discounts) << endl;

    return 0;
}