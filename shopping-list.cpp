#include <vector>
using namespace std;

float totalShoppingTripPrice(vector<float> prices, vector<float> discounts) {
    float totalPrice = 0;
    for (int i = 0; i < prices.size(); i++) {
        float price = prices[i];
        float discount = price * discounts[i] / 100;
        totalPrice += price - discount;
    }
    return totalPrice;
}

int main() {
    int numItems;
    cin >> numItems;

    vector<float> prices(numItems);
    for (int i = 0; i < numItems; i++) {
        cin >> prices[i];
    }

    vector<float> discounts(numItems);
    for (int i = 0; i < numItems; i++) {
        cin >> discounts[i];
    }

    float totalCost = totalShoppingTripPrice(prices, discounts);

    cout << fixed << setprecision(1) << totalCost << endl;

    return 0;
}