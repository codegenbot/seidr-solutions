double vectorDistance(int n, const vector<float>& v1, const vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pow(abs(v2[i] - v1[i]), 2);
    }
    return sqrt(sum);
}