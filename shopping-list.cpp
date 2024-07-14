#include <vector>
using namespace std;

float totalShoppingTrip(vector<float> prices, vector<float> discounts) {
    float totalPrice = 0;
    for (int i = 0; i < prices.size(); i++) {
        float priceWithDiscount = prices[i] * (1 - discounts[i] / 100);
        totalPrice += priceWithDiscount;
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
    cin >> n;
    vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    cout << fixed << setprecision(1) << totalShoppingTrip(prices, discounts) << endl;
    return 0;
}