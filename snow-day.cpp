#include <iostream>

float snowDay(int hours, float groundSnow, float rate, float melt) {
    float totalSnow = groundSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rate - melt;
    }
    return totalSnow;
}

int main() {
    int hours;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;

    float groundSnow, rate, melt;
    std::cout << "Enter the initial amount of snow on the ground (inches): ";
    std::cin >> groundSnow;

    std::cout << "Enter the rate of snow fall per hour (inches): ";
    std::cin >> rate;

    std::cout << "Enter the proportion of snow melting per hour: ";
    std::cin >> melt;

    float result = snowDay(hours, groundSnow, rate, melt);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << "\n";

    return 0;
}