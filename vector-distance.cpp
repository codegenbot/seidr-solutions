double calculateEuclideanDistance(const std::vector<float>& vector1, const std::vector<float>& vector2) {
    double distance = 0;
    for (int i = 0; i < vector1.size(); ++i) {
        distance += pow(vector1[i] - vector2[i], 2);
    }
    return sqrt(distance / vector1.size());
}