#include <iostream>
#include <iomanip>
using namespace std;

vector<float> prices;
vector<float> discounts;

double shoppingTrip(vector<float> p, vector<float> d) {
    double total = 0;
    for(int i = 0; i < p.size(); i++) {
        double price = p[i];
        double discount = price * (d[i] / 100.0);
        total += price - discount;
    }
    return total;
}

int main() {
    int n;
    cin >> n;

    prices.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    discounts.resize(n); 
    for(int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    
    cout << fixed << setprecision(1) << shoppingTrip(prices, discounts) << endl;
    
    return 0;
}