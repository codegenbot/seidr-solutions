#include <vector>
#include <cmath>

double euclideanDistance(const std::vector<double>& a, const std::vector<double>& b) {
    double distance = 0.0;
    int n = a.size();
    
    for (int i = 0; i < n; i++) {
        double diff = a[i] - b[i];
        distance += diff * diff;
    }
    
    return std::sqrt(distance);
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<double> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    std::cin >> n;
    
    std::vector<double> b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }
    
    double distance = euclideanDistance(a, b);
    std::cout << distance << std::endl;
    
    return 0;
}