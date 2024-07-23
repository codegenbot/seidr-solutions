```c++
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

    cout << fixed << setprecision(1) << shoppingList(prices, n, discounts) << endl;

    return 0;