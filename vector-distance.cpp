#include <vector>
#include <iostream>

double vectorDistance(std::vector<float>& vec1, std::vector<float>& vec2) {
    double distance = 0;
    for (int i = 0; i < vec1.size(); i++) {
        distance += pow(vec1[i] - vec2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vec1(n), vec2(n);

    for (int i = 0; i < n; i++) {
        std::cin >> vec1[i] >> vec2[i];
    }

    double dist = vectorDistance(vec1, vec2);
    std::cout << dist << std::endl;

    return 0;
}