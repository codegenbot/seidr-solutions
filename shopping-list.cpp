#include <vector>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total_price = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * discounts[i] / 100.0;
        total_price += price - discount;
    }
    return total_price;
}

int main() {
    int num_items;
    cin >> num_items;

    vector<float> prices(num_items);
    for (float &price : prices) {
        cin >> price;
    }

    vector<float> discounts(num_items);
    for (float &discount : discounts) {
        cin >> discount;
    }

    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;

    return 0;
}