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
    vector<float> prices = {10.0, 20.0, 30.0};
    vector<float> discounts = {5.0, 10.0, 15.0};
    cout << "Total cost after discount: $" << shoppingList(prices, discounts) << endl;
    return 0;
}