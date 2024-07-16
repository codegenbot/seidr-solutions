#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

double totalPriceAfterDiscount(const vector<float>& prices, const vector<float>& discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); ++i) {
        float price = prices[i];
        float discount = discounts[i] / 100.0;
        totalPrice += price * (1 - discount);
    }
    return totalPrice;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (float& price : prices) {
        cin >> price;
    }
    vector<float> discounts(n);
    for (float& discount : discounts) {
        cin >> discount;
    }
    if(prices.size() != discounts.size()) {
        cerr << "Error: Number of prices and discounts must be the same." << endl;
        return 1; // Return an error code to indicate something went wrong
    }
    cout << fixed << setprecision(1) << totalPriceAfterDiscount(prices, discounts) << endl;
    return 0;
}