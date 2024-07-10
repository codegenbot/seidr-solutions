#include <vector>
using namespace std;

double totalShoppingTripPrice(vector<float> prices, vector<float> discounts) {
    double total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100);
        total += price - discount;
    }
    return total;
}

int main() {
    int n;
    cin >> n;

    vector<float> prices(n);
    for (auto &price : prices) {
        cin >> price;
    }

    vector<float> discounts(n);
    for (auto &discount : discounts) {
        cin >> discount;
    }

    cout << fixed << setprecision(1) << totalShoppingTripPrice(prices, discounts) << endl;

    return 0;
}