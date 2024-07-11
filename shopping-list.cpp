#include <vector>
using namespace std;

double shoppingList(vector<float>& prices, vector<float>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * discounts[i] / 100.0;
        total += price - discount;
    }
    return total;
}

int main() {
    int numItems;
    cin >> numItems;

    vector<float> prices(numItems);
    for (int i = 0; i < numItems; i++) {
        cin >> prices[i];
    }

    vector<float> discounts(numItems);
    for (int i = 0; i < numItems; i++) {
        cin >> discounts[i];
    }

    double result = shoppingList(prices, discounts);
    cout << fixed << setprecision(1) << result << endl;

    return 0;
}