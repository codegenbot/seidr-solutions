#include <iostream>
#include <iomanip>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for(int i=0; i<prices.size(); i++){
        double price = prices[i];
        double discount = discounts[i] / 100.0;
        double discountedPrice = price * (1 - discount);
        total += discountedPrice;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for(int i=0; i<n; i++){
        cin >> prices[i];
    }
    cin >> n;
    vector<float> discounts(n);
    for(int i=0; i<n; i++){
        cin >> discounts[i];
    }
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    return 0;
}