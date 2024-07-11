#include <vector>
using namespace std;

double shoppingTripTotal(vector<double> prices, vector<double> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i] / 100.0);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    
    vector<double> prices(n);
    for (double &price : prices) {
        cin >> price;
    }
    
    vector<double> discounts(n);
    for (double &discount : discounts) {
        cin >> discount;
    }
    
    double total = shoppingTripTotal(prices, discounts);
    cout << fixed << setprecision(1) << total << endl;
    
    return 0;
}