#include <vector>
using namespace std;

double totalShoppingCost(int n, vector<float> prices, int m, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += prices[i] * (1 - discounts[i] / 100.0);
    }
    return total;
}

int main() {
    int n, m;
    cin >> n;
    vector<float> prices(n);
    for (float &price : prices) {
        cin >> price;
    }
    cin >> m;
    vector<float> discounts(m);
    for (float &discount : discounts) {
        cin >> discount;
    }
    double result = totalShoppingCost(n, prices, m, discounts);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}