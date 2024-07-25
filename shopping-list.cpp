#include <vector>
using namespace std;

float calculateShoppingTripCost(const vector<float>& prices, const vector<float>& discounts) {
    float totalCost = 0;
    for (int i = 0; i < prices.size(); i++) {
        float price = prices[i];
        float discount = price * (discounts[i] / 100);
        float discountedPrice = price - discount;
        if (discountedPrice < 0) discountedPrice = 0;
        totalCost += discountedPrice;
    }
    return totalCost;
}

int main() {
    int n;
    cin >> n;

    vector<float> prices(n);
    for (float& p : prices) cin >> p;

    vector<float> discounts(n);
    for (float& d : discounts) cin >> d;

    float result = calculateShoppingTripCost(prices, discounts);

    cout << fixed << setprecision(1) << result << endl;

    return 0;
}