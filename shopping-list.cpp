#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

double totalShoppingTripPrice(vector<float> prices, vector<float> discounts) {
    double totalPrice = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float price = prices[i];
        float discount = price * (discounts[i] / 100.0);
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
    cin >> n;
    vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    double result = totalShoppingTripPrice(prices, discounts);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}