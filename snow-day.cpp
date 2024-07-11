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
    float groundSnow, rate, melt;

    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the amount of snow on the ground (in inches): ";
    std::cin >> groundSnow;
    std::cout << "Enter the rate of snow fall per hour (in inches): ";
    std::cin >> rate;
    std::cout << "Enter the proportion of snow melting per hour: ";
    std::cin >> melt;

    float result = snowDay(hours, groundSnow, rate, melt);
    std::cout << "After " << hours << " hours, there will be " << result << " inches of snow." << std::endl;

    return 0;
}