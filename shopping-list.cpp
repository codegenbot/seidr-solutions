#include <vector>
using namespace std;

double totalShoppingCost(vector<float>& prices, vector<float>& discounts) {
    double totalCost = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        float discount = prices[i] * (discounts[i] / 100.0);
        totalCost += prices[i] - discount;
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
    double result = totalShoppingCost(prices, discounts);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}