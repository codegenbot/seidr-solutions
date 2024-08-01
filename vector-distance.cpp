#include <vector>
#include <iostream>

double calculateEuclideanDistance(std::vector<float> &v1, std::vector<float> &v2) {
    if(v1.size() != v2.size()) {
        return -1.0;  // or throw an exception, depending on the desired behavior
    }
    
    double sum = 0;
    for(int i = 0; i < v1.size(); i++) {
        sum += pow((v1[i] - v2[i]), 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> v1(n), v2(n);

    for(int i = 0; i < n; i++) {
        std::cin >> v1[i] >> v2[i];
    }

    double distance = calculateEuclideanDistance(v1, v2);
    std::cout << distance << std::endl;

    return 0;
}