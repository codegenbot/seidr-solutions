```c++
#include <iostream>
#include <vector>
using namespace std;

float shoppingList(const vector<float>& prices, int n, const vector<float>& discounts) {
    float total = 0;
    for (int i = 0; i < n; ++i) {
        total += prices[i] - (prices[i] * discounts[i] / 100.0f);
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
}