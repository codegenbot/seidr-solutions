#include <vector>
using namespace std;

double shoppingList(double prices[], int n, double discounts[]) {
    double total = 0;
    for(int i=0; i<n; i++) {
        double price = prices[i];
        double discount = discounts[i] / 100.0;
        double amount = price * (1 - discount);
        total += amount;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<double> prices(n);
    for(int i=0; i<n; i++) {
        cin >> prices[i];
    }
    cin >> n;
    vector<double> discounts(n);
    for(int i=0; i<n; i++) {
        cin >> discounts[i];
    }
    cout << fixed << setprecision(1) << shoppingList(&prices[0], n, &discounts[0]) << endl;
    return 0;
}