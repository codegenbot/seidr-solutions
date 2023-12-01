#include <iostream>
#include <vector>

using namespace std;

float calculateTotalPrice(vector<float>& prices, vector<float>& discounts) {
    float totalPrice = 0.0;
    
    for (int i = 0; i < prices.size(); i++) {
        float discountedPrice = prices[i] - (prices[i] * (discounts[i] / 100));
        totalPrice += discountedPrice;
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
    
    int m;
    cin >> m;
    
    vector<float> discounts(m);
    for (int i = 0; i < m; i++) {
        cin >> discounts[i];
    }
    
    float totalPrice = calculateTotalPrice(prices, discounts);
    cout << totalPrice << endl;
    
    return 0;
}