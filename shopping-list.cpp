```cpp
int main() {
    int n;
    cin >> n;

    vector<float> prices(n);
    for (float &p : prices) {
        cin >> p;
    }

    vector<float> discounts(n);
    for (float &d : discounts) {
        cin >> d;
    }

    float total = 0.0f;
    for (int i = 0; i < n; i++) {
        total += prices[i] - (prices[i] * (discounts[i] / 100));
    }

    cout << fixed << setprecision(1) << total << endl;

    return 0;
}