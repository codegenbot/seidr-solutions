double vectorDistance(int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double val = pow(x2[i] - x1[i], 2);
        sum += val;
    }
    return sqrt(sum);
}