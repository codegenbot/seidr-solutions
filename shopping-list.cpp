```cpp
int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    vector<float> discounts(n);
    for(int i = 0; i < n; i++) {
        cin >> prices[i] >> discounts[i];
    }
    if (prices.size() != discounts.size()) {
        cout << "Invalid input. The number of items in the list and discount do not match." << endl;
        return -1;
    }
    double total = 0;
    for(int i = 0; i < prices.size(); i++) {
        if (discounts[i] > 100 || prices[i] < 0 || discounts[i] < 0) {
            cout << "Invalid input. Please enter a discount percentage between 0 and 100." << endl;
            return -1.0;
        }
        total += prices[i] * (1 - discounts[i]/100.0);
    }
    cout << fixed << setprecision(2) << total << endl;
    return 0;
}