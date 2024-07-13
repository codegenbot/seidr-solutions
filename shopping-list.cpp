#include <vector>
using namespace std;

double shoppingTrip(vector<double> prices, vector<double> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100.0);
        total += price - discount;
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<double> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    
    vector<double> discounts(m);
    for (int i = 0; i < m; i++) {
        cin >> discounts[i];
    }
    
    cout << fixed;
    cout.precision(1);
    cout << shoppingTrip(prices, discounts) << endl;

    return 0;
}