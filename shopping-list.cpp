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

    total_price = ceil(total_price * 100) / 100; // Change to ceil or floor based on your needs to ensure correct rounding

    cout << fixed << setprecision(2) << total_price << endl;

    return 0;
}