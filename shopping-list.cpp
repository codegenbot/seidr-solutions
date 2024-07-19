```
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
    vector<float> prices = {10.99f, 20.99f, 5.99f};
    vector<float> discounts = {5.0f, 8.0f, 3.0f};
    float result = shoppingList(prices, discounts);
    return 0;
}