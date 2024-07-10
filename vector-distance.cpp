#include <vector>
#include <cmath>

double euclideanDistance(const std::vector<float>& vec1, const std::vector<float>& vec2) {
    double distance = 0.0;
    for (int i = 0; i < vec1.size(); ++i) {
        double difference = vec1[i] - vec2[i];
        distance += difference * difference;
    }
    return sqrt(distance);
}

int main() {
    int n;
    std::vector<float> v1, v2;

    // Read input
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        float val;
        std::cin >> val;
        v1.push_back(val);
    }
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        float val;
        std::cin >> val;
        v2.push_back(val);
    }

    // Calculate Euclidean distance
    double distance = euclideanDistance(v1, v2);

    // Print result
    std::cout << distance << std::endl;

    return 0;
}