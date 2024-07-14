#include <vector>
using namespace std;

float totalPriceAfterDiscount(const vector<float>& prices, const vector<float>& discounts) {
    float totalPrice = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        float discount = prices[i] * (discounts[i] / 100.0);
        totalPrice += prices[i] - discount;
    }
    return totalPrice;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (auto& price : prices) {
        cin >> price;
    }
    vector<float> discounts(n);
    for (auto& discount : discounts) {
        cin >> discount;
    }
    cout << fixed << setprecision(1) << totalPriceAfterDiscount(prices, discounts) << endl;
    return 0;
}