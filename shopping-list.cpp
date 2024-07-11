#include <vector>
using namespace std;

double shoppingTrip(vector<double> prices, vector<double> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<double> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    cin.ignore();
    cin >> n;
    vector<double> discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    cout << fixed << setprecision(1) << shoppingTrip(prices, discounts) << endl;
    return 0;
}