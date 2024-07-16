#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    vector<float> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    
    vector<float> discounts(n);
    for (int i = 0; i < n; ++i) {
        cin >> discounts[i];
    }
    
    float total = 0.0;
    for (int i = 0; i < n; ++i) {
        total += prices[i] * (100.0 - discounts[i]) / 100.0;
    }
    
    cout << total << endl;
    
    return 0;
}