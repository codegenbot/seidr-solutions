#include <vector>
using namespace std;

double shoppingList(double price[], double discount[]) {
    int n = sizeof(price) / sizeof(price[0]);
    double total = 0;
    for (int i = 0; i < n; i++) {
        double p = price[i] * (1 - discount[i] / 100.0);
        if (p < 0) p = 0;
        total += p;
    }
    return total;
}

int main() {
    int N;
    cin >> N;
    vector<double> prices(N), discounts(N);
    for (int i = 0; i < N; i++) {
        cin >> prices[i] >> discounts[i];
    }
    cout << fixed << setprecision(1) << shoppingList(&prices[0], &discounts[0]) << endl;
    return 0;
}