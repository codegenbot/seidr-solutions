#include <vector>
using namespace std;

double totalShoppingTripCost(vector<float> prices, vector<float> discounts) {
    double totalCost = 0;
    for (int i = 0; i < prices.size(); i++) {
        double costAfterDiscount = prices[i] * (1 - discounts[i]/100);
        totalCost += costAfterDiscount;
    }
    return totalCost;
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

    double result = totalShoppingTripCost(prices, discounts);

    cout << fixed;
    cout.precision(1);
    cout << result << endl;

    return 0;
}