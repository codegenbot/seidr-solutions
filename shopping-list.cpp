#include <vector>
using namespace std;

float totalShoppingPrice(vector<float> prices, vector<float> discounts) {
    float totalPrice = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float discountedPrice = prices[i] * (1 - discounts[i] / 100);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    int n;
    cin >> n;

    vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }

    float result = totalShoppingPrice(prices, discounts);

    cout << fixed << setprecision(1) << result;
    return 0;
}