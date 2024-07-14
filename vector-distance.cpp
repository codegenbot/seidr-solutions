double vectorDistance(int n, const vector<float>& x1, const vector<float>& x2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double diff = pow(x2[i] - x1[i], 2);
        sum += diff;
    }
    
    return sqrt(sum);
}