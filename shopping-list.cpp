float calculateTotalPrice(vector<float> prices, vector<float> discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}

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

    float total = calculateTotalPrice(prices, discounts);
    cout << total << endl;

    return 0;
}