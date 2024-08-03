#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    
    vector<float> discounts(n);
    for (int i = 0; i < n; ++i) {
        cin >> discounts[i];
    }
    
    float total_price = 0.0;
    for (int i = 0; i < n; ++i) {
        total_price += prices[i] * (1.0 - discounts[i] / 100.0);
    }
    
    total_price = round(total_price * 100) / 100; // Round to two decimal places
    
    cout << total_price << endl;
    
    return 0;
}