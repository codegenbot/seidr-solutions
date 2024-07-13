#include <iostream>
#include <iomanip>
using namespace std;

vector<float> prices;
vector<float> discounts;

double shoppingTrip() {
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
    
    prices.resize(n); // Declare and resize the prices vector
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    
    discounts.resize(n); // Declare, resize and read values into the discounts vector
    for(int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    
    cout << fixed << setprecision(1) << shoppingTrip() << endl;
    
    return 0;
}