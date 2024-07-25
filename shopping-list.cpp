#include <vector>
using namespace std;

float totalShoppingCost(int n, vector<float> prices, vector<float> discounts) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        float price = prices[i];
        float discount = price * discounts[i] / 100.0f;
        total += price - discount;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    float result = totalShoppingCost(n, prices, discounts);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}