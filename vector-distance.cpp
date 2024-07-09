#include <iostream>
#include <cmath>
#include <numeric>

double vectorDistance() {
    int n;
    std::cin >> n;

    float v1[n];
    float v2[n];

    for (int i = 0; i < n; i++) {
        std::cin >> v1[i] >> v2[i];
    }

    double distance = pow(std::accumulate(&v2[0], &v2[n], 0.0, 
                                         [&](float a, float b){return (b - a)*(b - a);}), 0.5);

    return distance; 

}

int main() {
    double result = vectorDistance();
    std::cout << "Euclidean Distance: " << result << std::endl;
    return (0);
}