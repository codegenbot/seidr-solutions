```c
#include <cmath>
#include <vector>

double euclideanDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    int min_len = std::min(v1.size(), v2.size());
    for (int i = 0; i < min_len; i++) {
        sum += pow(v2[i] - v1[i], 2);
    }
    return sqrt(sum);
}

int main() {
    std::vector<float> vec1;
    std::cout << "Enter dimensions of the first vector: ";
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        float temp;
        std::cin >> temp;
        vec1.push_back(temp);
    }

    std::vector<float> vec2;
    std::cout << "Enter dimensions of the second vector: ";
    int m;
    std::cin >> m;
    for(int i = 0; i < m; i++) {
        float temp;
        std::cin >> temp;
        vec2.push_back(temp);
    }

    double result = euclideanDistance(vec1, vec2);
    std::cout << "Euclidean distance between the two vectors: " << result << std::endl;

    return 0;
}