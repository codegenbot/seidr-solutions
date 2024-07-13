```c++
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

float shoppingList(vector<float>& prices, vector<float>& discounts) {
    float total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    vector<float> prices(n1);
    for (float& price : prices) {
        cin >> price;
    }
    vector<float> discounts(n2);
    for (float& discount : discounts) {
        cin >> discount;
    }
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    return 0;
}