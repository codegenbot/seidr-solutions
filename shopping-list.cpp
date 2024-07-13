float calculateTotalPrice(vector<float> prices, vector<float> discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        float discountedPrice = prices[i] - (prices[i] * discounts[i] / 100);
        total += discountedPrice;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    
    vector<float> prices(n);
    vector<float> discounts(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    
    for (int i = 0; i < n; ++i) {
        cin >> discounts[i];
    }
    
    float total = calculateTotalPrice(prices, discounts);
    
    cout << total << endl;
    
    return 0;
}