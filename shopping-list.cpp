```cpp
#include <iostream>
#include <iomanip>
using namespace std;

float shoppingList(const vector<float>& prices, const vector<float>& discounts) {
    float total = 0;
    for (int i = 0; i < prices.size(); i++) {
        float priceAfterDiscount = prices[i] * (1 - discounts[i] / 100);
        total += priceAfterDiscount;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    cin.ignore();
    cin >> n;
    vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    cout << fixed << setprecision(6) << shoppingList(prices, discounts) << endl;
}