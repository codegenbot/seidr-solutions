#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

float shoppingList(vector<float> prices, int n, vector<float> discounts) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        float discountedPrice = prices[i] - (prices[i] * discounts[i] / 100);
        total += discountedPrice;
    }
    return total;
}

int main() {
    int n;
    cin >> n;

    vector<float> prices(n);
    for (float &p : prices) {
        cin >> p;
    }

    vector<float> discounts(n);
    for (float &d : discounts) {
        cin >> d;
    }

    cout << fixed << setprecision(1) << shoppingList(prices, n, discounts) << endl;

    return 0;