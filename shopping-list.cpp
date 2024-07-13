#include <vector>
using namespace std;

float shoppingList(float price[], float discount[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        float discountedPrice = price[i] * (1 - discount[i] / 100);
        total += discountedPrice;
    }
    return total;
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
    float result = shoppingList(&prices[0], &discounts[0], n);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}