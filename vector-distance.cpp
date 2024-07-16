double vectorDistance(int n, const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(v2[i] - v1[i], 2);
    }
    return sqrt(sum);
}