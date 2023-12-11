#include <vector>
#include <iostream>
#include <cmath>
using namespace std;
float shoppingList(vector<float> prices, vector<float> discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] - (prices[i] * discounts[i]);
    }
    return total;
}
int main() {
    vector<float> prices{50.0, 100.0};
    vector<float> discounts{10.0, 20.0};
    cout << shoppingList(prices, discounts) << endl;
    return 0;
}