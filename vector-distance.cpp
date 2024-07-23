```cpp
#include <iostream>
#include <cmath>

double vectorDistance(int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double a, b;
        std::cin >> a >> b;
        sum += pow((b - a), 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    std::cout << "Enter the number of dimensions: ";
    std::cin >> n;
    std::cout << "Euclidean distance is: " << vectorDistance(n) << std::endl;
    return 0;
}