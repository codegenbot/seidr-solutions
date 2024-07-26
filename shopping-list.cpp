#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<float> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    vector<float> discounts(n);
    for (int i = 0; i < n; ++i) {
        cin >> discounts[i];
    }

    float total_price = 0.0;
    transform(prices.begin(), prices.end(), discounts.begin(), prices.begin(),
              [](float price, float discount) { return price * (1.0 - discount / 100.0); });

    for (const auto& price : prices) {
        total_price += price;
    }

    cout << fixed << setprecision(2) << total_price << endl;

    return 0;
}