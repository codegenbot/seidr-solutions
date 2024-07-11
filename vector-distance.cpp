double vector_distance(int n) {
    vector<float> v1(n), v2(n);
    for (int i = 0; i < n; i++) {
        float v1i, v2i;
        cin >> v1i >> v2i;
        v1[i] = v1i; 
        v2[i] = v2i; 
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = v2[i] - v1[i];
        sum += diff * diff;
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    
    cout << fixed << setprecision(10) << vector_distance(n) << endl;
    return 0;
}