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
    
    float sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += pow(v1[i] - v2[i], 2);
    }
    
    float distance = sqrt(sum);
    cout << distance << endl;
    
    return 0;
}