int main() {
    int n;
    cin >> n;
    vector<float> vec1(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }
    
    int m;
    cin >> m;
    vector<float> vec2(m);
    for (int i = 0; i < m; ++i) {
        cin >> vec2[i];
    }
    
    float sum = 0.0;
    for (int i = 0; i < min(n, m); ++i) {
        sum += pow(vec1[i] - vec2[i], 2);
    }
    for (int i = min(n, m); i < max(n, m); ++i) {
        if (n > m) {
            sum += pow(vec1[i], 2);
        } else {
            sum += pow(vec2[i], 2);
        }
    }
    
    cout << sqrt(sum) << endl;
    
    return 0;
}