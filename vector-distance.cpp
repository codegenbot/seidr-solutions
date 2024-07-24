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
    std::vector<float> v1;
    std::vector<float> v2;

    int n;
    std::cout << "Enter the dimension: ";
    std::cin >> n;

    for(int i=0; i<n; i++) {
        float x;
        std::cout << "Enter vector 1 element " << i+1 << ": ";
        std::cin >> x;
        v1.push_back(x);

        float y;
        std::cout << "Enter vector 2 element " << i+1 << ": ";
        std::cin >> y;
        v2.push_back(y);
    }

    double distance = euclideanDistance(v1, v2);
    std::cout << "Euclidean Distance: " << distance << std::endl;

    return 0;
}