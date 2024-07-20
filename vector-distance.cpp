#include <iostream>
#include <cmath>

double vectorDistance(int n, float v1[], float v2[]) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow(v2[i] - v1[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    std::cout << "Enter the dimension of the vectors: ";
    std::cin >> n;

    float v1[n], v2[n];
    std::cout << "Enter vector 1 (elements separated by spaces): ";
    for (int i = 0; i < n; i++) {
        std::string str;
        std::cin >> str;
        v1[i] = stof(str);
        std::cin.ignore();
    }
    
    std::cout << "Enter vector 2 (elements separated by spaces): ";
    for (int i = 0; i < n; i++) {
        std::string str;
        std::cin >> str;
        v2[i] = stof(str);
    }

    double distance = vectorDistance(n, v1, v2);
    std::cout << "Euclidean distance between the two vectors is: " << distance << std::endl;

    return 0;
}