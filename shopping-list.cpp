#include <vector>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double totalPrice = 0.0;
    
    for (int i = 0; i < prices.size(); i++) {
        totalPrice += prices[i] * (1 - discounts[i] / 100);
    }
    
    return totalPrice;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<float> prices(n), discounts(m);
    
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    
    for (int i = 0; i < m; i++) {
        cin >> discounts[i];
    }
    
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    
    return 0;
}