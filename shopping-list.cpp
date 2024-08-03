#include <vector>
using namespace std;

double totalPriceAfterDiscount(vector<double> prices, vector<double> discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); ++i) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100);
        totalPrice += (price - discount);
    }
    return totalPrice;
}

int main() {
    int n;
    cin >> n;
    vector<double> prices(n);
    for (double& price : prices) {
        cin >> price;
    }
    cin >> n;
    vector<double> discounts(n);
    for (double& discount : discounts) {
        cin >> discount;
    }
    cout << fixed << setprecision(1) << totalPriceAfterDiscount(prices, discounts) << endl;
    return 0;
}