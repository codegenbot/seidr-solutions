int main() {
    int n;
    cin >> n;
    
    vector<float> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    
    vector<float> discounts(n);
    float total_discounted_price = 0.0;
    for (int i = 0; i < n; ++i) {
        cin >> discounts[i];
        total_discounted_price += prices[i] * (1.0 - discounts[i] / 100);
    }
    
    cout << total_discounted_price << endl;
    
    return 0;
}