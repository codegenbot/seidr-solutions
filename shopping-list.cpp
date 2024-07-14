#include <vector>
using namespace std;

double shoppingTrip(vector<double> prices, vector<double> discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); i++) {
        double priceWithDiscount = prices[i] * (1 - discounts[i]);
        totalPrice += priceWithDiscount;
    }
    return totalPrice;
}

int main() {
    int n;
    cin >> n;

    vector<double> prices(n);
    for (double &price : prices) {
        cin >> price;
    }

    vector<double> discounts(n);
    for (double &discount : discounts) {
        cin >> discount;
    }

    cout << fixed << setprecision(1) << shoppingTrip(prices, discounts) << endl;

    return 0;
}