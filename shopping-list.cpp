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
        float discounted_price = prices[i] - prices[i] * discounts[i] / 100;
        total_price += discounted_price;
    }

    cout << total_price << endl;

    return 0;
}