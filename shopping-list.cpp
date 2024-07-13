#include <vector>
using namespace std;

double totalShoppingTripPrice(vector<double> prices, vector<double> discounts) {
    double totalPrice = 0.0;
    for(int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100);
        double discountedPrice = price - discount;
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    int n;
    cin >> n;

    vector<double> prices(n);
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    vector<double> discounts(n);
    for(int i = 0; i < n; i++) {
        cin >> discounts[i];
    }

    double result = totalShoppingTripPrice(prices, discounts);

    cout << fixed << setprecision(1) << result << endl;

    return 0;
}