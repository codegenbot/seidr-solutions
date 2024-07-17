#include <vector>
using namespace std;

double totalShoppingCost(int n, vector<float> prices, vector<float> discounts) {
    double totalPrice = 0;
    for (int i = 0; i < n; i++) {
        float price = prices[i];
        float discount = price * (discounts[i] / 100.0);
        totalPrice += price - discount;
    }
    return totalPrice;
}

int main() {
    int n;
    cin >> n;
    
    vector<float> prices(n), discounts(n);
    
    for(int i=0; i<n; i++){
        cin >> prices[i];
    }
    
    for(int i=0; i<n; i++){
        cin >> discounts[i];
    }
    
    double totalCost = totalShoppingCost(n, prices, discounts);
    cout << fixed << setprecision(1) << totalCost << endl;
    
    return 0;
}