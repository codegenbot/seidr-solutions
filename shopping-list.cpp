#include <vector>
using namespace std;

float totalShoppingCost(vector<float> prices, vector<float> discounts) {
    float total = 0;
    for (int i = 0; i < prices.size(); i++) {
        float price = prices[i];
        float discount = discounts[i];
        float discountedPrice = price - (price * (discount / 100));
        total += discountedPrice;
    }
    return total;
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
    cout << fixed << setprecision(1) << totalShoppingCost(prices, discounts) << endl;
    return 0;
}