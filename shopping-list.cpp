#include <vector>
using namespace std;

double totalShoppingTripPrice(const vector<float>& prices, const vector<float>& discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); ++i) {
        double price = prices[i];
        double discount = discounts[i] / 100.0; // convert percent to decimal
        double discountedPrice = price * (1 - discount);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    int n;
    cin >> n;

    vector<float> prices(n);
    for (float& p : prices) {
        cin >> p;
    }

    vector<float> discounts(n);
    for (float& d : discounts) {
        cin >> d;
    }

    double result = totalShoppingTripPrice(prices, discounts);

    cout << fixed << setprecision(1) << result << endl;

    return 0;
}