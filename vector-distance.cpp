#include <iostream>
#include <cmath>
#include <vector>

double vectorDistance(int n, std::vector<float> v1, std::vector<float> v2) {
    double sumOfSquares = 0.0;
    for (int i = 0; i < n; i++) {
        sumOfSquares += pow(v1[i] - v2[i], 2);
    }
    for (int i = n; i < 2*n; i++) {
        sumOfSquares += pow(v1[i-n] - v2[i-n], 2);
    }
    return sqrt(sumOfSquares);
}

int main() {
    int n;
    std::cin >> n; 
    std::vector<float> v1(2*n), v2(2*n);
    for (int i = 0; i < n; i++) {
        float temp1, temp2;
        std::cin >> temp1; // read one value
        v1[i] = temp1;
        std::cin >> temp2; 
        v2[i] = temp2; 
    }
    double result = vectorDistance(n, v1, v2);
    std::cout << "The Euclidean distance is: " << result << std::endl;
    return 0;
}