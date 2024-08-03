#include <vector>
using namespace std;

double totalShoppingTripPrice(const vector<float>& prices, const vector<float>& discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); ++i) {
        float price = prices[i];
        float discount = price * discounts[i] / 100.0f;
        totalPrice += price - discount;
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
    
    cout << fixed << setprecision(1) << totalShoppingTripPrice(prices, discounts) << endl;

    return 0;
}