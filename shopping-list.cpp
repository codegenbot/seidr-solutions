#include <vector>
using namespace std;

float totalShoppingPrice(vector<float> prices, vector<float> discounts) {
    float totalPrice = 0;
    for (int i = 0; i < prices.size(); i++) {
        float price = prices[i];
        float discount = price * (discounts[i] / 100);
        totalPrice += price - discount;
    }
    return totalPrice;
}

int main() {
    int numItems, numDiscounts;
    cin >> numItems;
    vector<float> prices(numItems);
    for (float &price : prices) {
        cin >> price;
    }
    cin >> numDiscounts;
    vector<float> discounts(numDiscounts);
    for (float &discount : discounts) {
        cin >> discount;
    }
    cout << fixed << setprecision(1) << totalShoppingPrice(prices, discounts) << endl;
    return 0;
}