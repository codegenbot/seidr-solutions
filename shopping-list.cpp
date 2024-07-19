```c++
#include <vector>
using namespace std;

float shoppingList(vector<float> prices, vector<float> discounts) {
    float total = 0;
    for (int i = 0; i < prices.size(); i++) {
        float price = prices[i];
        float discount = price * (discounts[i] / 100.0);
        total += price - discount;
    }
    return total;
}

int main() {
    vector<float> prices = {2.5, 1.8, 3.9};
    vector<float> discounts = {15, 10, 20};
    float result = shoppingList(prices, discounts);
    return 0;
}