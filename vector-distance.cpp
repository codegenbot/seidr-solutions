int main() {
    int n;
    cin >> n;
    vector<double> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<double> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += (a[i] - b[i]) * (a[i] - b[i]);
    }

    double result = sqrt(sum);
    cout << result << endl;

    return 0;
}