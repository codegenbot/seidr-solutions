double calculateEuclideanDistance(int n, vector<double> v1, vector<double> v2) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = v1[i] - v2[i];
        sum += diff * diff;
    }
    return sqrt(sum / n);
}