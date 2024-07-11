#include <vector>
using namespace std;

double shoppingList(vector<double> prices, vector<double> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100.0);
        total += price - discount;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<double> prices(n);
    for (double &price : prices) {
        cin >> price;
    }
    cin.ignore();
    cin >> n;
    vector<double> discounts(n);
    for (double &discount : discounts) {
        cin >> discount;
    }
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    return 0;
}