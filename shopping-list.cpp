#include <vector>
using namespace std;

double shoppingList(double price[], double discount[], int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        double discountedPrice = price[i] - (price[i] * discount[i] / 100);
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
    double price[n];
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }
    int m;
    cin >> m;
    double discount[m];
    for (int i = 0; i < m; i++) {
        cin >> discount[i];
    }
    cout << fixed << setprecision(1) << shoppingList(price, discount, n) << endl;
    return 0;
}