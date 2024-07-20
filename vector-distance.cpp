```cpp
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

    std::vector<std::vector<float>>(n) v1, v2;  // Initialize with n elements

    for (int i = 0; i < n; i++) {
        float s;
        while(true) {
            std::cout << "Enter element " << i+1 << " of vector 1: ";
            std::cin >> s;
            try {
                v1[i].push_back(s);
                break;
            } catch(const std::invalid_argument& e) {
                std::cout << "Invalid input. Please enter a number.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }

        while(true) {
            std::cout << "Enter element " << i+1 << " of vector 2: ";
            std::cin >> s;
            try {
                v2[i].push_back(s);
                break;
            } catch(const std::invalid_argument& e) {
                std::cout << "Invalid input. Please enter a number.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
    }

    double distance = vectorDistance(n, v1[0], v2[0]);
    for (int i = 1; i < n; i++) {
        if (v1[i].size() != v2[i].size()) {
            std::cout << "Vectors are not of the same dimension.\n";
            return 0;
        }
        double sum = 0.0;
        for (int j = 0; j < v1[i].size(); j++) {
            double diff = v2[i][j] - v1[i][j];
            sum += diff * diff;
        }
        distance += sqrt(sum);
    }

    std::cout << "Euclidean distance between the two vectors is: " << distance << std::endl;

    return 0;
}