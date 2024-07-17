#include <vector>
using namespace std;

float calculateShoppingTripTotalPrice(const vector<float>& prices, const vector<float>& discounts) {
    float total = 0;
    for (int i = 0; i < prices.size(); i++) {
        float price = prices[i];
        float discount = price * (discounts[i] / 100.0f);
        total += price - discount;
    }
    return total;
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
    float total = calculateShoppingTripTotalPrice(prices, discounts);
    cout << fixed << setprecision(1) << total << endl;
    return 0;
}