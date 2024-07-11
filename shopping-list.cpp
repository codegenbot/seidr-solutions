#include <iostream>
#include <vector>
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
    }

    float total_price = 0.0;
    for (int i = 0; i < n; ++i) {
        float discount_amount = prices[i] * (discounts[i] / 100.0f);
        total_price += prices[i] - discount_amount;
    }

    cout.precision(2);
    cout << fixed << total_price << "\n";

    return 0;
}