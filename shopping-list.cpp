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
    vector<float> prices(3); // Initialize size
    vector<float> discounts(3); 
    prices[0]=1.99; prices[1]=2.99; prices[2]=3.99;
    discounts[0]=5; discounts[1]=10; discounts[2]=15;
    cout << fixed << setprecision(2) << shoppingList(prices, discounts) << endl;
    return 0;
}