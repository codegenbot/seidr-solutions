#include <vector>
using namespace std;

double shoppingList(vector<double> prices, vector<double> discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = discounts[i];
        double discountedPrice = price - (price * discount / 100);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    int n;
    cin >> n;

    vector<double> prices(n);
    for (double &price : prices) {
        cin >> price;
    }

    vector<double> discounts(n);
    for (double &discount : discounts) {
        cin >> discount;
    }

    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;

    return 0;
}