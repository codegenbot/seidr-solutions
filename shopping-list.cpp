#include <vector>
using namespace std;

float calculateTotalPrice(vector<float> prices, vector<float> discounts) {
    float totalPrice = 0.0;
    int n = prices.size();
    
    for (int i = 0; i < n; i++) {
        float discount = (100 - discounts[i]) / 100;
        totalPrice += prices[i] * discount;
    }
    
    return totalPrice;
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

    float totalPrice = calculateTotalPrice(prices, discounts);
    cout << totalPrice << endl;
    
    return 0;
}