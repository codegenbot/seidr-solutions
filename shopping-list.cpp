```
#include <vector>
using namespace std;

float shoppingList(vector<float> prices, vector<float> discounts) {
    float total = 0;
    for(int i=0; i<prices.size(); i++) {
        total += price - (price * (discounts[i] / 100));
    }
    return total;
}

int main() {
    vector<float> prices = {1.99, 2.99, 3.99};
    vector<float> discounts = {5, 10, 15};
    cout << shoppingList(prices, discounts) << endl;
    return 0;
}