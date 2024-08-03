#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

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
        total_price += prices[i] * (1.0 - (discounts[i] / 100.0));
    }

    total_price = round(total_price * 100) / 100; // Round to 2 decimal places

    cout << fixed << setprecision(2) << total_price << endl;

    return 0;
}