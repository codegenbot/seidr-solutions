```cpp
double euclideanDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < std::min(v1.size(), v2.size()); i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum); 
}