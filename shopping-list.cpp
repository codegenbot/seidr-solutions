#include <vector>
using namespace std;

double shoppingList(vector<double> prices, vector<double> discounts) {
    double total = 0;
    for(int i = 0; i < prices.size(); i++) {
        double priceWithDiscount = prices[i] * (1 - discounts[i]);
        total += priceWithDiscount;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<double> prices(n);
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    cin >> n;
    vector<double> discounts(n);
    for(int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    return 0;
}