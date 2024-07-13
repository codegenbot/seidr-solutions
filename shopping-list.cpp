#include <vector>
using namespace std;

float shoppingList(float totalPrice, int n, vector<float> prices, vector<float> discounts) {
    float totalPriceAfterDiscount = 0;
    for (int i = 0; i < n; i++) {
        totalPriceAfterDiscount += prices[i] * (1 - discounts[i]);
    }
    return totalPriceAfterDiscount;
}

int main() {
    int n;
    cin >> n;

    vector<float> prices(n);
    for (float &price : prices) {
        cin >> price;
    }

    vector<float> discounts(n);
    for (float &discount : discounts) {
        cin >> discount;
    }

    float totalPrice = shoppingList(0, n, prices, discounts);

    cout << fixed << setprecision(1) << totalPrice << endl;

    return 0;
}