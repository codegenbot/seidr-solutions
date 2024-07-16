double vectorDistance(int n, const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += static_cast<double>(v1[i] - v2[i]) * (v1[i] - v2[i]);
    }
    double sqrt_sum = static_cast<double>(sum);
    return std::sqrt(sqrt_sum);
}