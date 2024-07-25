int main() {
    int n;
    cin >> n;
    vector<float> v1(n);
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }
    
    int m;
    cin >> m;
    vector<float> v2(m);
    for (int i = 0; i < m; ++i) {
        cin >> v2[i];
    }
    
    double distance = 0.0;
    for (int i = 0; i < n; ++i) {
        distance += pow(v1[i] - v2[i], 2);
    }
    distance = sqrt(distance);
    
    cout << distance << endl;
    
    return 0;
}