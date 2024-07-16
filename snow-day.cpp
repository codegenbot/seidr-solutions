#include <iostream>
#include <cstring>

float snowAfterHours(int hours, float initialSnow, float rateOfSnowFall, float meltingRate) {
    float currentSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += rateOfSnowFall;
        currentSnow -= meltingRate * currentSnow;
    }
    return currentSnow;
}

int main() {
    char buffer[100];
    std::cout << "Enter the number of hours: ";
    std::cin >> buffer;
    int hours = std::atoi(buffer);

    float initialSnow, rateOfSnowFall, meltingRate;
    std::cout << "Enter the initial snow: ";
    std::cin >> initialSnow;
    std::cout << "Enter the rate of snow fall: ";
    std::cin >> rateOfSnowFall;
    std::cout << "Enter the melting rate per hour: ";
    std::cin >> meltingRate;

    float result = snowAfterHours(hours, initialSnow, rateOfSnowFall, meltingRate);
    std::cout << "Snow after " << hours << " hours: " << result << std::endl;

    return 0;
}