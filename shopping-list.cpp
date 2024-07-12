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
    }

    for (int i = 0; i < n; ++i) {
        float discounted_price = prices[i] * (100.0 - discounts[i]) / 100.0;
        total_price += discounted_price;
    }

    cout << fixed;
    cout.precision(2);
    cout << total_price << endl;

    return 0;
}