#include <vector>
using namespace std;

double shoppingList(double price[], double discount[]) {
    double total = 0;
    for (int i = 0; i < sizeof(price) / sizeof(price[0]); i++) {
        total += price[i] * (1 - discount[i] / 100.0);
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
    double discount[n];
    for (int i = 0; i < n; i++) {
        cin >> discount[i];
    }
    cout << fixed << setprecision(1) << shoppingList(price, discount) << endl;
    return 0;
}