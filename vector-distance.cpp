```cpp
#include <iostream>
#include <cmath>
#include <sstream>

double vectorDistance(int n, float v1[], float v2[]) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += (v2[i] - v1[i]) * (v2[i] - v1[i]);
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
        getline(std::cin, str); 
        std::istringstream iss(str);
        for(int j=0;j<2;j++){
            iss >> v1[i];
            if(j==0)std::cin.ignore();
        }
    }

    std::cout << "Enter vector 2 (elements separated by spaces): ";
    for (int i = 0; i < n; i++) {
        std::string str;
        getline(std::cin, str); 
        std::istringstream iss(str);
        for(int j=0;j<2;j++){
            iss >> v2[i];
            if(j==0)std::cin.ignore();
        }
    }

    double distance = vectorDistance(n, v1, v2);
    std::cout << "Euclidean distance between the two vectors is: " << distance << std::endl;

    return 0;
}