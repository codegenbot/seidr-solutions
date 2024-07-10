#include <vector>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double totalPrice = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        totalPrice += prices[i] * (1 - discounts[i]/100);
    }
    return totalPrice;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (float &price : prices) {
        cin >> price;
    }
    vector<float> discounts(n);
    for (float &discount : discounts) {
        cin >> discount;
    }
    double result = shoppingList(prices, discounts);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}