#include <vector>
using namespace std;

float totalPriceAfterDiscount(const vector<float>& prices, const vector<float>& discounts) {
    float totalPrice = 0;
    for (int i = 0; i < prices.size(); ++i) {
        float price = prices[i];
        float discount = price * discounts[i] / 100.0f;
        totalPrice += price - discount;
    }
    return totalPrice;
}

int main() {
    int numItems, numRows;
    cin >> numItems;

    vector<float> prices(numItems);
    for (float& price : prices) {
        cin >> price;
    }

    cin >> numRows;
    vector<float> discounts(numRows);
    for (float& discount : discounts) {
        cin >> discount;
    }

    cout << fixed << setprecision(1) << totalPriceAfterDiscount(prices, discounts) << endl;

    return 0;
}