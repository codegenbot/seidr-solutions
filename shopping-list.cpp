#include <vector>
using namespace std;

float calculateTotalPrice(vector<float>& prices, vector<float>& discounts) {
    float totalPrice = 0;
    for (int i = 0; i < prices.size(); i++) {
        float price = prices[i];
        float discount = price * discounts[i] / 100;
        totalPrice += price - discount;
    }
    return totalPrice;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (auto& price : prices) {
        cin >> price;
    }
    vector<float> discounts(n);
    for (auto& discount : discounts) {
        cin >> discount;
    }
    float totalPrice = calculateTotalPrice(prices, discounts);
    cout << fixed << setprecision(1) << totalPrice << endl;
    return 0;
}