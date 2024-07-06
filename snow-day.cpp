```c++
#include <iostream>

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow -= totalSnow * proportionMeltingPerHour; // subtract melting
        totalSnow += rateOfSnowfall; // add new snowfall
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;

    std::cout << "Enter number of hours: ";
    std::cin >> hours;
    std::cout << "Enter initial snow: ";
    std::cin >> initialSnow;
    std::cout << "Enter rate of snow fall: ";
    std::cin >> rateOfSnowfall;
    std::cout << "Enter proportion of melting per hour: ";
    std::cin >> proportionMeltingPerHour;

    double result = snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour);

    std::cout << "After the snow day, there will be " << result << " cm of snow." << std::endl;

    return 0;
}