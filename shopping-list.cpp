#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    
    vector<double> discounts(n);
    for (int i = 0; i < n; ++i) {
        cin >> discounts[i];
    }
    
    double total = 0.0;
    for (int i = 0; i < n; ++i) {
        total += prices[i] * (1.0 - discounts[i] / 100.0);
    }
    
    cout << fixed << total << endl;
    
    return 0;
}