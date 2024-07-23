#include <iostream>
#include <iomanip> 
using namespace std;

double shoppingList(vector<float>& prices, vector<float>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    float price;
    for (int i = 0; i < n; i++) {
        cin >> price >> prices[i];
    }
    vector<float> discounts(n);
    float discount;
    for (int i = 0; i < n; i++) {
        cin >> discount >> discounts[i];
    }
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    return 0;
}