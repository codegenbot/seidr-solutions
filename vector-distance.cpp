double calculateEuclideanDistance(int n, double* v1, double* v2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (v1[i] - v2[i]) * (v1[i] - v2[i]);
    }
    return sqrt(sum);
}