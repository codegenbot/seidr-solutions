#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

double shoppingTrip(int n, vector<float> prices, int m, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += prices[i] * (1 - discounts[i]/100.0);
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    vector<float> discounts(m);
    for (int i = 0; i < m; i++) {
        cin >> discounts[i];
    }
    cout << fixed << setprecision(1) << shoppingTrip(n, prices, m, discounts) << endl;
    return 0;
}