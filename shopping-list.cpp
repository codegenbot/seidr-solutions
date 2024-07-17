#include <vector>
using namespace std;

float shoppingList(vector<float> prices, vector<float> discounts) {
    float total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n), discounts(n);
    for (float &p : prices) cin >> p;
    for (float &d : discounts) cin >> d;
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    return 0;
}