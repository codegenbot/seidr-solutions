double euclideanDistance(const vector<float>& v1, const vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        sum += sqrt(pow(v1[i] - v2[i], 2));
    }
    return sum;
}