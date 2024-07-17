#include <vector>
using namespace std;

double shoppingList(int n, vector<float> prices, int m, vector<float> discounts) {
    double totalPrice = 0;
    for (int i = 0; i < n; i++) {
        float price = prices[i];
        float discount = discounts[i] / 100.0f;
        totalPrice += price * (1 - discount);
    }
    return totalPrice;
}

int main() {
    int n, m;
    cin >> n;
    vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    cin >> m;
    vector<float> discounts(m);
    for (int i = 0; i < m; i++) {
        cin >> discounts[i];
    }
    cout << fixed << setprecision(1) << shoppingList(n, prices, m, discounts) << endl;
    return 0;
}