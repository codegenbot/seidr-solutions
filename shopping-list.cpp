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
    vector<float> prices = {10.00, 20.00, 30.00};
    vector<float> discounts = {5.00, 8.00, 12.00};
    float result = shoppingList(prices, discounts);
    return 0;
}