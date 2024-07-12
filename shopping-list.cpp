#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> prices(static_cast<size_t>(n));
    for (int i = 0; i < n; i++) {
        cin >> prices[static_cast<size_t>(i)];
    }
    
    vector<float> discounts(static_cast<size_t>(n));
    for (int i = 0; i < n; i++) {
        cin >> discounts[static_cast<size_t>(i)];
    }
    
    float total_price = 0.0;
    for (int i = 0; i < n; i++) {
        total_price += prices[static_cast<size_t>(i)] * (1.0 - discounts[static_cast<size_t>(i)] / 100.0);
    }
    
    cout << total_price << endl;
    
    return 0;
}