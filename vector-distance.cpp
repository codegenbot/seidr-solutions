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
        double diff = pow(v2[i] - v1[i], 2);
        sum += diff;
    }
    
    return sqrt(sum);
}