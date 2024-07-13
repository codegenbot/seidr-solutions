#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>

double calculateDistance(const std::vector<float>& vec1, const std::vector<float>& vec2) {
    double sum = 0.0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }
    return std::sqrt(sum);
}

int main() {
    std::vector<float> vec1(20);
    std::string input;
    std::getline(std::cin, input);
    std::istringstream iss(input);
    for (int i = 0; i < 20; ++i) {
        float val;
        if (!(iss >> val)) {
            std::cerr << "Invalid input format for vector 1" << std::endl;
            return 1;
        }
        vec1[i] = val;
    }

    std::vector<float> vec2(20);
    std::getline(std::cin, input);
    std::istringstream iss2(input);
    for (int i = 0; i < 20; ++i) {
        float val;
        if (!(iss2 >> val)) {
            std::cerr << "Invalid input format for vector 2" << std::endl;
            return 1;
        }
        vec2[i] = val;
    }

    if (!iss.eof() || !iss2.eof()) {
        std::cerr << "Incorrect number of elements provided" << std::endl;
        return 1;
    }

    std::cout << std::fixed << calculateDistance(vec1, vec2) << std::endl;

    return 0;
}