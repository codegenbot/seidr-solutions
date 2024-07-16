#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

float shoppingList(vector<float> prices, vector<float> discounts) {
    float total = 0;
    for(int i=0; i<prices.size(); i++) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    vector<float> discounts(n);
    
    for(int i=0; i<n; i++) {
        cin >> prices[i];
        cin >> discounts[i];
    }

    cout << fixed << setprecision(2) << shoppingList(prices, discounts) << endl;
}