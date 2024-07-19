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
    vector<float> prices = {10.99, 5.99, 2.99};
    vector<float> discounts = {5, 10, 15};
    float result = shoppingList(prices, discounts);
    return 0;
}