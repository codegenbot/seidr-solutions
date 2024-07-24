int main() {
    int n;
    cin >> n;
    vector<double> vec1(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }
    
    cin >> n;
    vector<double> vec2(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }
    
    double dist = 0.0;
    for (int i = 0; i < n; ++i) {
        dist += pow(vec1[i] - vec2[i], 2);
    }
    
    cout << sqrt(dist) << endl;
    
    return 0;
}