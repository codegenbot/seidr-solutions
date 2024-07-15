#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    vector<float> discounts(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i] >> discounts[i];
    }
    
    float total = 0.0;
    for (int i = 0; i < n; ++i) {
        total += prices[i] - prices[i] * discounts[i] / 100.0;
    }
    
    cout << total << '\n';
    
    return 0;
}