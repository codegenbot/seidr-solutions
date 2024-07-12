#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    vector<float> discounts(n);

    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }

    float total_price = 0.0;
    for (int i = 0; i < n; i++) {
        total_price += prices[i] - round(prices[i] * discounts[i] / 10000) * 100;
    }

    cout << fixed;
    cout.precision(2);
    cout << total_price << endl;

    return 0;
}