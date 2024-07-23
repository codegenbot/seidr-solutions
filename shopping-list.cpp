#include <vector>
#include <iostream>

using namespace std;

double calculateTotalPrice(const vector<float>& prices, const vector<float>& discounts) {
    double totalPrice = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        float price = prices[i];
        float discount = discounts[i] / 100.0; // Convert percent to decimal
        float discountedPrice = price * (1 - discount);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    int numItems, numDiscounts;
    cin >> numItems >> numDiscounts;

    vector<float> prices(numItems);
    for (float& price : prices) {
        cin >> price;
    }

    vector<float> discounts(numDiscounts);
    for (float& discount : discounts) {
        cin >> discount;
    }

    cout << fixed << setprecision(1); // To print decimal numbers with one digit after the dot
    cout << calculateTotalPrice(prices, discounts) << endl;

    return 0;
}