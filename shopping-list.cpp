#include <vector>
using namespace std;

double totalPriceAfterDiscount(const vector<double>& prices, const vector<double>& discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = discounts[i];
        totalPrice += price * (1 - discount / 100.0);
    }
    return totalPrice;
}

int main() {
    int numItems;
    cin >> numItems;

    vector<double> prices(numItems);
    for (double& price : prices) {
        cin >> price;
    }

    vector<double> discounts(numItems);
    for (double& discount : discounts) {
        cin >> discount;
    }

    cout << fixed << setprecision(1) << totalPriceAfterDiscount(prices, discounts) << endl;

    return 0;
}