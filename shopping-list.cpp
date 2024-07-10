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
    vector<float> prices(n);
    for (float &price : prices) {
        cin >> price;
    }
    int m;
    cin >> m;
    vector<float> discounts(m);
    for (float &discount : discounts) {
        cin >> discount;
    }
    float result = shoppingList(prices, discounts);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}