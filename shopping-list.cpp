#include <vector>
using namespace std;

double shoppingList(const vector<float>& prices, const vector<float>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); ++i) {
        double price = prices[i];
        double discount = price * discounts[i] / 100.0;
        total += price - discount;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (float& p : prices) {
        cin >> p;
    }
    vector<float> discounts(n);
    for (float& d : discounts) {
        cin >> d;
    }
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    return 0;
}