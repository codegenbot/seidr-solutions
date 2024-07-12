#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    size_t n;
    cin >> n;
    vector<float> prices(n);
    vector<float> discounts(n);
    float total_price = 0.0;

    for (size_t i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    for (size_t i = 0; i < n; ++i) {
        cin >> discounts[i];
    }

    for (size_t i = 0; i < n; ++i) {
        total_price += prices[i] - (prices[i] * discounts[i] / 100.0);
    }

    cout << fixed << setprecision(2) << total_price << endl;

    return 0;
}