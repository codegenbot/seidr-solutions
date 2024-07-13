#include <vector>
using namespace std;

double totalPriceAfterDiscount(const vector<float>& prices, const vector<float>& discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); ++i) {
        double discountAmount = prices[i] * (discounts[i] / 100.0);
        double priceAfterDiscount = prices[i] - discountAmount;
        totalPrice += priceAfterDiscount;
    }
    return totalPrice;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (float& price : prices) {
        cin >> price;
    }
    int m;
    cin >> m;
    vector<float> discounts(m);
    for (float& discount : discounts) {
        cin >> discount;
    }
    cout << fixed << setprecision(1) << totalPriceAfterDiscount(prices, discounts) << endl;
    return 0;
}