#include <iostream>
#include <iomanip>
using namespace std;

double shoppingTrip(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for(int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100.0);
        total += price - discount;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    
    vector<float> prices(n);
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    
    vector<float> discounts(n);
    for(int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    
    cout << fixed << setprecision(1) << shoppingTrip(prices, discounts) << endl;
    
    return 0;
}