#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

float shoppingList(vector<float> prices, vector<float> discounts) {
    float total = 0;
    for(int i=0; i<prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]/100.0);
    }
    return total;
}

int main() {
    vector<float> prices(3);
    vector<float> discounts(3);

    cout << fixed << setprecision(2) << shoppingList(prices, discounts) << endl;

    prices[0] = 1.99f; prices[1] = 2.99f; prices[2] = 3.99f;
    discounts[0] = 5.0f; discounts[1] = 10.0f; discounts[2] = 15.0f;

    cout << fixed << setprecision(2) << shoppingList(prices, discounts) << endl;
}