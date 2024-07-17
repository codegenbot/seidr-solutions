#include <vector>
#include <iostream>

double vectorDistance(std::vector<float>& v1, std::vector<float>& v2) {
    if (v1.size() != v2.size()) {
        return -1.0; // Return an error value if vectors are not of equal size
    }

    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> v1(n), v2(n);

    for (int i = 0; i < n; i++) {
        std::cin >> v1[i] >> v2[i];
    }

    double dist = vectorDistance(v1, v2);
    
    std::cout << dist << std::endl;
    
    return 0;
}