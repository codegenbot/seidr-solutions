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
    vector<float> prices = {5.0, 10.0, 15.0};
    vector<float> discounts = {10, 20, 30};
    float result = shoppingList(prices, discounts);
    return 0;
}