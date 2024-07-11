#include <vector>
using namespace std;

float totalShoppingCost(int n, vector<float> prices, vector<float> discounts) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += prices[i] - (prices[i] * discounts[i] / 100);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n), discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    cout << fixed << setprecision(1) << totalShoppingCost(n, prices, discounts) << endl;
    return 0;
}