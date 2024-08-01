#include <vector>
#include <iostream>

double vectorDistance(std::vector<float> vec1, std::vector<float> vec2) {
    if(vec1.size() != vec2.size()) {
        return -1; // Return -1 for invalid input
    }
    double distance = 0.0;
    for(int i=0; i<vec1.size(); i++) {
        distance += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }
    return sqrt(distance);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> vec1(n), vec2(n);
    for(int i=0; i<n; i++) {
        std::cin >> vec1[i];
    }
    for(int i=0; i<n; i++) {
        std::cin >> vec2[i];
    }
    std::cout << vectorDistance(vec1, vec2) << std::endl;
    return 0;
}