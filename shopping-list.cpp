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
    vector<float> prices = {5.99f, 3.99f, 2.49f};
    vector<float> discounts = {10.f, 20.f, 15.f};
    float result = shoppingList(prices, discounts);
    return 0;
}