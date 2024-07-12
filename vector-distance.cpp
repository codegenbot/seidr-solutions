int main() {
    int n;
    cin >> n;
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        double x;
        cin >> x;
        sum += x * x;
    }
    double dist = sqrt(sum);
    
    cin >> n;
    sum = 0;
    for (int i = 0; i < n; ++i) {
        double x;
        cin >> x;
        sum += x * x;
    }
    dist = sqrt(sum - dist * dist);

    cout << dist << endl;

    return 0;
}