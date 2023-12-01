#include <vector>

float shoppingListTotalPrice(const vector<float>& prices, const vector<float>& discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float discount = discounts[i] / 100.0;
        float discountedPrice = prices[i] - (prices[i] * discount);
        total += discountedPrice;
    }
    return total;
}

int main() {
    int n;
    cin >> n;

    vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int m;
    cin >> m;

    vector<float> discounts(m);
    for (int i = 0; i < m; i++) {
        cin >> discounts[i];
    }

    float totalPrice = shoppingListTotalPrice(prices, discounts);
    cout << totalPrice << endl;

    return 0;
}