#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> prices(n), discounts(n);

    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    float total_price = 0.0;
    for (int i = 0; i < n; ++i) {
        cin >> discounts[i];
        total_price += prices[i] * (100.0 - discounts[i]) / 100.0;
    }

    cout << fixed << setprecision(2) << total_price << endl;

    return 0;
}