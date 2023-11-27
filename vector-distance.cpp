double euclideanDistance(const std::vector<double>& v1, const std::vector<double>& v2) {
    int size = std::min(v1.size(), v2.size());
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        double diff = v1[i] - v2[i];
        sum += diff * diff;
    }
    return std::sqrt(sum);
}