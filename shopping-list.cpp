#include <vector>
using namespace std;

double totalShoppingTrip(float n, const vector<float>& prices, const vector<float>& discounts) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        float price = prices[i];
        float discount = price * (discounts[i] / 100);
        sum += price - discount;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (float& p : prices) cin >> p;
    cin >> n;
    vector<float> discounts(n);
    for (float& d : discounts) cin >> d;
    cout << fixed << setprecision(1) << totalShoppingTrip(n, prices, discounts) << endl;
    return 0;
}