```c
#include <vector>
using namespace std;

float shoppingList(vector<float> prices, vector<float> discounts) {
    float total = 0;
    for(int i=0; i<prices.size(); i++) {
        float price = prices[i];
        float discount = price * (discounts[i] / 100);
        total += price - discount;
    }
    return total;
}

int main() {
    vector<float> prices(3);
    prices[0] = 10.99;
    prices[1] = 7.99;
    prices[2] = 3.99;
    vector<float> discounts(3);
    discounts[0] = 5;
    discounts[1] = 10;
    discounts[2] = 20;
    cout << shoppingList(prices, discounts) << endl;
    return 0;
}