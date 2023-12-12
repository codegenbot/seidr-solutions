```cpp
#include <vector>

float calculateTotalPrice(const vector<float>& prices, const vector<float>& discounts) {
    float totalPrice = 0;
    for (int i = 0; i < prices.size(); i++) {
        float discountedPrice = prices[i] - (prices[i] * discounts[i] / 100);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    int numItems;
    cin >> numItems;
    
    vector<float> prices(numItems);
    for (int i = 0; i < numItems; i++) {
        cin >> prices[i];
    }
    
    int numDiscounts;
    cin >> numDiscounts;
    
    vector<float> discounts(numDiscounts);
    for (int i = 0; i < numDiscounts; i++) {
        cin >> discounts[i];
    }
    
    float totalPrice = calculateTotalPrice(prices, discounts);
    cout << totalPrice << endl;
    
    return 0;
}
```