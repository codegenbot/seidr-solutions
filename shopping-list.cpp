#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    vector<float> discounts(n);

    for (int i = 0; i < n; ++i) {
        cin >> prices[i] >> discounts[i];
        prices[i] = prices[i] - prices[i] * discounts[i] / 100;
    }

    float total_price = 0.0;
    for (int i = 0; i < n; ++i) {
        total_price += prices[i];
    }

    cout.precision(2);
    cout << fixed << total_price << endl;

    return 0;
}