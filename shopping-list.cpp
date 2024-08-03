#include <vector>
#include <iostream>

using namespace std;

double shoppingList(vector<float>& prices, vector<float>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        float price = prices[i];
        float discount = price * discounts[i] / 100.0;
        total += price - discount;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    
    vector<float> prices(n);
    for (float& price : prices) {
        cin >> price;
    }
    
    vector<float> discounts(n);
    for (float& discount : discounts) {
        cin >> discount;
    }
    
    double total = shoppingList(prices, discounts);
    cout << fixed << setprecision(1) << total << endl;
    
    return 0;
}