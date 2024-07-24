```c++
#include <vector>
#include <cmath>
#include <cstdio>

double euclideanDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow(v2[i] - v1[i], 2);
    }
    return sqrt(sum); 
}

int main() {
    int n;
    std::cout << "Enter number of dimensions: ";
    std::cin >> n;

    std::vector<float> v1(n);
    std::cout << "Enter vector 1 elements: ";
    for (auto &element : v1) {
        std::cin >> element;
    }

    std::vector<float> v2(n);
    std::cout << "Enter vector 2 elements: ";
    for (auto &element : v2) {
        std::cin >> element;
    }

    double dist = euclideanDistance(v1, v2);
    printf("Euclidean distance: %.2f\n", dist);

    return 0;
}