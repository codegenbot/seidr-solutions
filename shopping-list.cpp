#include <vector>
using namespace std;

double totalShoppingTrip(vector<float> prices, vector<float> discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); i++) {
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
    for (auto& price : prices) {
        cin >> price;
    }

    vector<float> discounts(n);
    for (auto& discount : discounts) {
        cin >> discount;
    }

    cout << fixed << setprecision(1) << totalShoppingTrip(prices, discounts);

    return 0;
}