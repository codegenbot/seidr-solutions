#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    vector<float> discounts(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> discounts[i];
        if (discounts[i] < 0) {
            discounts[i] = 0;
        } else if (discounts[i] > 100) {
            discounts[i] = 100;
        }
    }

    float total_price = 0.0;
    for (int i = 0; i < n; ++i) {
        total_price += prices[i] * (100.0 - discounts[i]) * 0.01;
    }

    cout << fixed << setprecision(2) << total_price << endl;

    return 0;
}