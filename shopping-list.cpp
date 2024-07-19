#include <vector>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double totalPrice = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        float price = prices[i];
        float discount = price * discounts[i] / 100.0f;
        totalPrice += price - discount;
    }
    return totalPrice;
}

int main() {
    int numItems, numDiscounts;
    cin >> numItems >> numDiscounts;

    vector<float> prices(numItems);
    for (float &price : prices) {
        cin >> price;
    }

    vector<float> discounts(numDiscounts);
    for (float &discount : discounts) {
        cin >> discount;
    }

    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;

    return 0;
}