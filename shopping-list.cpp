#include <vector>
using namespace std;

double shoppingList(vector<double>& prices, vector<double>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double discountAmount = prices[i] * (discounts[i] / 100);
        double amountAfterDiscount = prices[i] - discountAmount;
        if (amountAfterDiscount < 0) {
            amountAfterDiscount = 0;
        }
        total += amountAfterDiscount;
    }
    return total;
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

    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;

    return 0;
}