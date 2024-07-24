#include <vector>
using namespace std;

double shoppingList(vector<double> prices, vector<double> discounts) {
    double total = 0;
    for(int i = 0; i < prices.size(); i++) {
        double discount = prices[i] * (discounts[i] / 100);
        total += prices[i] - discount;
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

    vector<double> discounts(n);
    for(int i = 0; i < n; i++) {
        cin >> discounts[i];
    }

    cout << fixed;
    cout.precision(1);
    cout << shoppingList(prices, discounts) << endl;

    return 0;
}