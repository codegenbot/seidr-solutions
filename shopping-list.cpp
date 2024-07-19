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
    vector<float> prices({10.5f, 20.7f, 30.3f});
    vector<float> discounts({8.2f, 12.9f, 15.4f));
    float result = shoppingList(prices, discounts);
    return 0;
}