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
        cin >> prices[i] >> discounts[i];
        prices[i] = prices[i] * (100 - discounts[i]) / 100;
        total_price += prices[i];
    }

    cout << total_price << endl;

    return 0;
}