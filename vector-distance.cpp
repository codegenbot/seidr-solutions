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
    std::vector<float> v1 = {1, 2, 3};
    std::vector<float> v2 = {4, 5, 6};
    int n = 3; // number of dimensions

    double distance = vectorDistance(n, v1, v2);
    std::cout << "Vector distance: " << distance << std::endl;

    return 0;
}