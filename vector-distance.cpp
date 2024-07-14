#include <vector>
#include <iostream>

double vectorDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    int n = v1.size();
    for (int i = 0; i < n; ++i) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<float> v1(n), v2(n);
    
    for (int i = 0; i < n; ++i) {
        std::cin >> v1[i] >> v2[i];
    }
    
    double result = vectorDistance(v1, v2);
    
    std::cout << result << std::endl;
    
    return 0;
}