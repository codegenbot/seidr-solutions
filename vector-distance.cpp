int main() {
    int n;
    cin >> n;
    vector<double> v1(n);
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }
    
    cin >> n;
    vector<double> v2(n);
    for (int i = 0; i < n; ++i) {
        cin >> v2[i];
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += (v1[i] - v2[i]) * (v1[i] - v2[i]);
    }
    
    double result = sqrt(sum);
    
    cout << result << endl;

    return 0;
}