#include <iostream>
#include <cmath>
#include <vector>

double vectorDistance(int n, std::vector<float> v1, std::vector<float> v2) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = v2[i] - v1[i];
        sum += diff * diff;
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    std::cout << "Enter the dimension of the vectors: ";
    std::cin >> n;

    std::vector<float> v1(n), v2(n);

    for (int i = 0; i < n; i++) {
        std::string s;
        std::cout << "Enter element " << i+1 << " of vector 1: ";
        std::getline(std::cin, s);
        std::cin.ignore();
        v1[i] = std::stof(s);

        std::cout << "Enter element " << i+1 << " of vector 2: ";
        std::getline(std::cin, s);
        std::cin.ignore();
        v2[i] = std::stof(s);
    }

    double distance = vectorDistance(n, v1, v2);
    std::cout << "Euclidean distance between the two vectors is: " << distance << std::endl;

    return 0;
}