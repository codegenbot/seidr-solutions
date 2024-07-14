#include <vector>
using namespace std;

double totalPriceAfterDiscount(const vector<float>& prices, const vector<float>& discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); ++i) {
        float price = prices[i];
        float discount = discounts[i] / 100.0f; // convert percent to decimal
        float discountedPrice = price * (1 - discount);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    int n;
    cin >> n;

    vector<float> prices(n);
    for (float& price : prices) {
        cin >> price;
    }

    vector<float> discounts(n);
    for (float& discount : discounts) {
        cin >> discount;
    }

    double totalPrice = totalPriceAfterDiscount(prices, discounts);
    cout << fixed << setprecision(1) << totalPrice << endl;

    return 0;
}