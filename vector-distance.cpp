#include <cmath>
#include <vector>

double vectorDistance(int n, const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double diff = v1[i] - v2[i];
        sum += std::pow(diff, 2);
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::vector<float> v1;
    std::vector<float> v2;

    std::cout << "Enter the dimension: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        float val;
        std::cout << "Enter value for v1 and v2 at index " << i << ": ";
        std::cin >> val;
        v1.push_back(val);
        v2.push_back(val);
    }

    double distance = vectorDistance(n, v1, v2);

    std::cout << "The Euclidean distance is: " << distance << std::endl;

    return 0;
}