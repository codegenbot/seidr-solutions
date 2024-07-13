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

    float total = 0;
    for (int i = 0; i < n; i++) {
        total += (1 - discounts[i] / 100) * prices[i];
    }

    cout << total << endl;

    return 0;
}