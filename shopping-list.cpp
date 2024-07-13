#include <vector>
using namespace std;

double shoppingList(double price[], int n, double discount[]) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        double discountedPrice = price[i] * (1 - discount[i] / 100);
        total += discountedPrice;
    }
    return total;
}

int main() {
    int n, t;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        vector<double> prices(n), discounts(n);
        for (int j = 0; j < n; j++) {
            cin >> prices[j] >> discounts[j];
        }
        double totalPrice = shoppingList(&prices[0], n, &discounts[0]);
        cout << fixed << setprecision(1) << totalPrice << endl;
    }
    return 0;
}