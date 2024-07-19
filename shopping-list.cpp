#include <vector>
using namespace std;

float shoppingList(vector<float> prices, vector<float> discounts) {
    float totalPrice = 0;
    for(int i = 0; i < prices.size(); i++) {
        totalPrice += (1 - discounts[i] / 100) * prices[i];
    }
    return totalPrice;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    int m;
    cin >> m;
    vector<float> discounts(m);
    for(int i = 0; i < m; i++) {
        cin >> discounts[i];
    }
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    return 0;
}