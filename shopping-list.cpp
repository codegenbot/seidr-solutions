#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);

    float total_price = 0.0;
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
        total_price += prices[i];
    }

    float discount_price = 0.0;
    for (int i = 0; i < n; ++i) {
        float discount;
        cin >> discount;
        discount_price += prices[i] * (100 - discount) / 100.0;
    }

    cout.precision(2);
    cout << fixed << total_price - discount_price << endl;

    return 0;
}