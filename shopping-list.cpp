#include <vector>
using namespace std;

double shoppingList(double price[], int n, double discount[]) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        double temp = price[i] - (price[i] * discount[i] / 100);
        if (temp < 0) temp = 0;
        total += temp;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<double> price(n), discount(n);
    for (int i = 0; i < n; i++) {
        cin >> price[i] >> discount[i];
    }
    cout << fixed << setprecision(1) << shoppingList(&price[0], n, &discount[0]) << endl;
    return 0;
}