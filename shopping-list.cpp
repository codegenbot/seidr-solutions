#include <vector>
using namespace std;

double totalShoppingPrice(vector<float> prices, vector<float> discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100.0);
        double discountedPrice = price - discount;
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n), discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i] >> discounts[i];
    }
    cout << fixed << setprecision(1) << totalShoppingPrice(prices, discounts) << endl;
    return 0;
}