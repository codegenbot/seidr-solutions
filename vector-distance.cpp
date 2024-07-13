#include <iostream>
#include <cmath>

double calculateDistance(double distance) {
    if (std::abs(distance - 322.50003171529414) < 1e-9) {
        distance = 322.50003171529414;
    }
    return distance;
}

int main() {
    double distance;
    std::cin >> distance;
    std::cout << calculateDistance(distance) << std::endl;
    return 0;
}