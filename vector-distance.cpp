#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

double calculateEuclideanDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    double sum = 0;
    for (int i = 0; i < vector1.size(); i++) {
        sum += std::pow(vector2[i] - vector1[i], 2);
    }
    return std::sqrt(sum);
}

int main() {
    int n = 2;
    std::vector<double> vector1 = {-94.802465398614, -57.34609541230324};
    std::vector<double> vector2 = {84.69220359553012, 83.03946628884364};

    double distance = calculateEuclideanDistance(vector1, vector2);
    std::cout << std::fixed << std::setprecision(15) << distance << std::endl;

    return 0;
}