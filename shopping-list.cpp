#include <vector>
using namespace std;

double shoppingList(double prices[], int n, double discount[]) {
    double totalPrice = 0;
    for (int i = 0; i < n; i++) {
        double price = prices[i];
        double disc = price * (discount[i] / 100.0);
        totalPrice += price - disc;
    }
    return totalPrice;
}

int main() {
    int numItems, count;
    cin >> count;

    vector<double> prices(count);
    for (int i = 0; i < count; i++) {
        cin >> prices[i];
    }

    cin >> count;

    vector<double> discounts(count);
    for (int i = 0; i < count; i++) {
        cin >> discounts[i];
    }

    cout << fixed << setprecision(1) << shoppingList(&prices[0], count, &discounts[0]) << endl;
    
    return 0;
}