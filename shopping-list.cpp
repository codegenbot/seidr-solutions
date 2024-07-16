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
    vector<float> prices = {1.99, 2.99, 3.99};
    vector<float> discounts = {5, 10, 15};
    shoppingList(prices, discounts);
    return 0;
}