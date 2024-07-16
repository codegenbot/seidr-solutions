int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    vector<float> discounts(n);
    
    for(int i=0; i<n; i++) {
        cin >> prices[i];
        cin >> discounts[i];
    }

    std::cout << std::setiosflags(std::ios::fixed) | std::setprecision(2);
    cout << shoppingList(prices, discounts) << endl;

}