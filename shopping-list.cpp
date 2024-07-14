#include <vector>
using namespace std;

double totalShoppingTripPrice(vector<float> prices, vector<float> discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); i++) {
        float price = prices[i];
        float discount = discounts[i] / 100.0f; // Convert percent to fraction
        float discountedPrice = price * (1 - discount);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    int numItems, numDiscounts;
    cin >> numItems >> numDiscounts;

    vector<float> prices(numItems, 0.0f);
    vector<float> discounts(numDiscounts, 0.0f);

    for (int i = 0; i < numItems; i++) {
        cin >> prices[i];
    }
    for (int i = 0; i < numDiscounts; i++) {
        cin >> discounts[i];
    }

    cout << fixed << setprecision(1) << totalShoppingTripPrice(prices, discounts) << endl;

    return 0;
}