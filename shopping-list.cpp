#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    vector<float> discounts(n);

    float total_price = 0.0;
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> discounts[i];
        total_price += prices[i] * (1 - discounts[i] / 100.0);
    }

    cout.precision(2);
    cout << fixed << total_price << endl;

    return 0;
}