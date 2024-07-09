#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100.0);
        total += price - discount;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    float prices[n];
    for (float &price : prices) {
        cin >> price;
    }
    float discounts[n];
    for (float &discount : discounts) {
        cin >> discount;
    }
    cout << fixed << setprecision(1) << shoppingList(vector<float>(prices, prices + n), vector<float>(discounts, discounts + n)) << endl;
    return 0;
}