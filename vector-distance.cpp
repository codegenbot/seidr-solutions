int main() {
    int n;
    cin >> n;
    vector<float> v1(n);
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }
    
    cin >> n;
    vector<float> v2(n);
    for (int i = 0; i < n; ++i) {
        cin >> v2[i];
    }
    
    float dist = 0.0;
    for (int i = 0; i < n; ++i) {
        dist += pow(v1[i] - v2[i], 2);
    }
    
    dist = sqrt(dist);
    
    cout << dist << endl;
    
    return 0;
}