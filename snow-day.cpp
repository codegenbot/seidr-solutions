#include <iostream>

double snowDay(int hours, double onTheGround, double rateOfSnowFall, double proportionPerHour) {
    for (int i = 0; i < hours; i++) {
        onTheGround += rateOfSnowFall;
        onTheGround -= onTheGround * proportionPerHour / 100.0;
    }
    return onTheGround;
}

int main() {
    int hours;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    
    double onTheGround, rateOfSnowFall, proportionPerHour;
    std::cout << "Enter how much snow is on the ground: ";
    std::cin >> onTheGround;
    
    std::cout << "Enter the rate of snow fall per hour: ";
    std::cin >> rateOfSnowFall;
    
    std::cout << "Enter the proportion of snow melting per hour (in percent): ";
    std::cin >> proportionPerHour;

    double result = snowDay(hours, onTheGround, rateOfSnowFall, proportionPerHour);
    std::cout << "After " << hours << " hours, there is " << result << " inches of snow on the ground.\n";
    
    return 0;
}