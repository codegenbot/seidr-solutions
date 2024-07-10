#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for(int i=0; i<prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]/100.0);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    
    vector<float> prices(n);
    vector<float> discounts(n);
    
    for(int i=0; i<n; i++) {
        cin >> prices[i] >> discounts[i];
    }
    
    cout << setprecision(1) << fixed << shoppingList(prices, discounts) << endl;
    
    return 0;
}