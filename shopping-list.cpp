#include <vector>
using namespace std;

float calculateTotalPrice(int n, vector<float> prices, vector<float> discounts) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += prices[i] * (1 - discounts[i] / 100.0);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n), discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i] >> discounts[i];
    }
    cout << fixed << setprecision(1) << calculateTotalPrice(n, prices, discounts) << endl;
    return 0;
}