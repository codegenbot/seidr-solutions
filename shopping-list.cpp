#include <vector>
using namespace std;

double totalShoppingTripCost(const vector<float>& prices, const vector<float>& discounts) {
    double totalCost = 0;
    for (int i = 0; i < prices.size(); ++i) {
        double price = prices[i];
        double discount = price * discounts[i] / 100.0;
        totalCost += price - discount;
    }
    return totalCost;
}

int main() {
    int n;
    cin >> n;

    vector<float> prices(n);
    for (float& price : prices) {
        cin >> price;
    }

    vector<float> discounts(n);
    for (float& discount : discounts) {
        cin >> discount;
    }

    double totalCost = totalShoppingTripCost(prices, discounts);

    cout << fixed << setprecision(1) << totalCost << endl;

    return 0;
}