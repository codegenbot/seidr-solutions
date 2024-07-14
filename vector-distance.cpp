#include <vector>
#include <cmath>
#include <initializer_list>

double vectorDistance(int n, const std::vector<float>& x1, const std::vector<float>& x2) {
    double result = 0;
    for (int i = 0; i < n; i++) {
        double diff = pow((x2[i] - x1[i]), 2);
        result += diff;
    }
    
    return sqrt(result); 
}

int main() {
    int n = 3;
    std::vector<float> x1({1, 2, 3});
    std::vector<float> x2({4, 5, 6});
    double distance = vectorDistance(n, x1, x2);
    std::cout << "Vector distance: " << distance << std::endl;
    return 0;