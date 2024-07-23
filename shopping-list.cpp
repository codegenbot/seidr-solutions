#include <iostream>
#include <vector>
#include <iomanip>

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
        total += prices[i] * (100 - discounts[i]) / 100;
    }

    cout << fixed << setprecision(2) << total << endl;

    return 0;
}