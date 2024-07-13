#include <vector>
using namespace std;

double totalShoppingTripPrice(vector<float> prices, vector<float> discounts) {
    double totalPrice = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * discounts[i] / 100.0;
        totalPrice += price - discount;
    }
    return totalPrice;
}

int main() {
    int n;
    cin >> n;
    
    vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    
    vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    
    cout << fixed << setprecision(1) << totalShoppingTripPrice(prices, discounts) << endl;
    
    return 0;
}