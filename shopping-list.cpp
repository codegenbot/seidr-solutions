#include <vector>
using namespace std;

double totalShoppingTripPrice(vector<float> prices, vector<float> discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * discounts[i] / 100;
        totalPrice += price - discount;
    }
    return totalPrice;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (float &price : prices) {
        cin >> price;
    }
    vector<float> discounts(n);
    for (float &discount : discounts) {
        cin >> discount;
    }
    double totalPrice = totalShoppingTripPrice(prices, discounts);
    cout << fixed << setprecision(1) << totalPrice << endl;
    return 0;
}