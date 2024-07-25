#include <vector>
using namespace std;

float shoppingList(float price, float discount) {
    return price - (price * discount / 100);
}

int main() {
    int n;
    cin >> n;

    vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }

    float total = 0;
    for (int i = 0; i < n; i++) {
        total += shoppingList(prices[i], discounts[i]);
    }

    cout << fixed << setprecision(1) << total << endl;

    return 0;
}