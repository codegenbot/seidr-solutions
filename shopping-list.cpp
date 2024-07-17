#include <vector>
using namespace std;

double shoppingList(double prices[], int n, double discount[]) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        double price = prices[i] - (prices[i] * discount[i] / 100);
        if (price < 0) {
            price = 0;
        }
        total += price;
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    double prices[n];
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    double discount[m];
    for (int i = 0; i < m; i++) {
        cin >> discount[i];
    }
    cout << fixed << setprecision(1) << shoppingList(&prices[0], n, &discount[0]) << endl;
    return 0;
}