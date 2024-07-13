#include <vector>
#include <iostream>
#include <cmath>

double vectorDistance(const std::vector<float>& vec1, const std::vector<float>& vec2) {
    if (vec1.size() != vec2.size()) {
        return -1.0;
    }

    double sum = 0.0;
    for (int i = 0; i < vec1.size(); i++) {
        sum += pow(vec1[i] - vec2[i], 2);
    }

    return sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vec1(n), vec2(n);

    for (int i = 0; i < n; i++) {
        std::cin >> vec1[i] >> vec2[i];
    }

    double distance = vectorDistance(vec1, vec2);
    std::cout << distance << std::endl;

    return 0;
}