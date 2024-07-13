int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    
    int m;
    cin >> m;
    vector<float> discounts(m);
    for (int i = 0; i < m; ++i) {
        cin >> discounts[i];
    }
    
    float total = 0.0;
    for (int i = 0; i < n; ++i) {
        float discounted_price = prices[i] - (prices[i] * discounts[i] / 100);
        total += discounted_price;
    }
    
    cout << total << endl;
    
    return 0;
}