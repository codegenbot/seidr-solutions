```cpp
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
    vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i] >> discounts[i];
    }
    double temp = shoppingList(prices, discounts);
    cout << fixed << showpoint << setprecision(1) << temp << endl;
    return 0;
}