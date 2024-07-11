#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> prices(n);
    vector<double> discounts(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> discounts[i];
    }
    
    double total_price = 0.0;
    for (int i = 0; i < n; ++i) {
        double discounted_price = (1 - discounts[i]/100) * prices[i];
        total_price += discounted_price;
    }

    cout << total_price << "\n";

    return 0;
}