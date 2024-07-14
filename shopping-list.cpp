#include <vector>
using namespace std;

double shoppingList(vector<double> prices, vector<double> discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100.0);
        totalPrice += price - discount;
    }
    return totalPrice;
}

int main() {
    int numItems;
    cin >> numItems;
    vector<double> prices(numItems);
    for (int i = 0; i < numItems; i++) {
        cin >> prices[i];
    }
    cin >> numItems;
    vector<double> discounts(numItems);
    for (int i = 0; i < numItems; i++) {
        cin >> discounts[i];
    }
    double result = shoppingList(prices, discounts);
    cout.precision(10);
    cout << fixed << result << endl;
    return 0;
}