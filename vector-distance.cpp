double vectorDistance(std::vector<float> v1, std::vector<float> v2) {
    if (v1.size() != v2.size()) {
        throw std::runtime_error("Vectors must be the same size");
    }
    double sum = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        double diff = abs(v2[i] - v1[i]);
        sum += diff;
    }
    
    return sqrt(sum);
}