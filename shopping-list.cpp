int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    vector<float> discounts(n);
    
    for(int i=0; i<n; i++) {
        cin >> prices[i];
        cin >> discounts[i];
    }
    
    cout << fixed << setprecision(2) << shoppingList(prices, discounts) << endl;
}