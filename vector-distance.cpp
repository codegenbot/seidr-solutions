#include <vector>
#include <iostream>
#include <cmath>

std::vector<float> vector1(int n) {
    std::vector<float> x1(n);
    for (int i = 0; i < n; i++) {
        float num;
        cin >> num;
        x1[i] = num;
    }
    return x1;
}

std::vector<float> vector2(int n) {
    std::vector<float> x2(n);
    for (int i = 0; i < n; i++) {
        float num;
        cin >> num;
        x2[i] = num;
    }
    return x2;
}

double vectorDistance(int n, std::vector<float> v1, std::vector<float> v2) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow((v2[i] - v1[i]), 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    std::cout << "Enter the number of dimensions: ";
    std::cin >> n;
    std::vector<float> v1 = vector1(n);
    std::vector<float> v2 = vector2(n);
    
    std::cout << "Euclidean distance is: " << fixed << setprecision(10) << vectorDistance(n, v1, v2) << std::endl;
    return 0;
}