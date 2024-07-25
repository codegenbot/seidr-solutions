#include <vector>
using namespace std;

float calculateTotalPrice(const vector<float>& prices, const vector<float>& discounts) {
    float total = 0;
    for (int i = 0; i < prices.size(); i++) {
        float price = prices[i];
        float discount = price * discounts[i] / 100.0f;
        total += price - discount;
    }
    return total;
}

int main() {
    int numItems;
    cin >> numItems;

    vector<float> prices(numItems);
    for (float& price : prices) {
        cin >> price;
    }

    vector<float> discounts(numItems);
    for (float& discount : discounts) {
        cin >> discount;
    }

    float totalPrice = calculateTotalPrice(prices, discounts);

    cout << fixed << setprecision(1) << totalPrice << endl;

    return 0;
}