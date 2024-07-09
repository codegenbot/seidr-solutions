#include <vector>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100.0);
        total += price - discount;
    }
    return total;
}

int main() {
    vector<float> prices(3); 
    prices[0] = 10; prices[1] = 20; prices[2] = 30;

    vector<float> discounts(3);
    discounts[0] = 5; discounts[1] = 10; discounts[2] = 15;
    
    cout << "Total cost of shopping trip: $" << shoppingList(prices, discounts) << endl;
    return 0;
}