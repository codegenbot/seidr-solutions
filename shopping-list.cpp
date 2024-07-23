#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

float shoppingList(float price[], int n, float discount[]) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        float discountedPrice = price[i] - (price[i] * discount[i] / 100);
        total += discountedPrice;
    }
    return total;
}

int main() {
    int n;
    cin >> n;

    vector<float> prices(n);
    for (float &p : prices) {
        cin >> p;
    }

    vector<float> discounts(n);
    for (float &d : discounts) {
        cin >> d;
    }

    cout << fixed << setprecision(2) << shoppingList(&prices[0], n, &discounts[0]) << endl;

    return 0;
}