double calculateEuclideanDistance(int n, std::vector<double> v1, std::vector<double> v2) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = v1[i] - v2[i];
        sum += pow(diff, 2);
    }
    return sqrt(sum); 
}