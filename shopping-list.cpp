```cpp
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

float shoppingList(vector<float> prices, vector<float> discounts) {
    float total = 0;
    for(int i=0; i<prices.size(); i++) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}

int main() {
    vector<float> prices = {1.99f, 2.99f, 3.99f};
    vector<float> discounts = {5.0f, 10.0f, 15.0f};
    cout << fixed << setprecision(2) << shoppingList(prices, discounts) << endl;
}