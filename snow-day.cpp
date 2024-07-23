#include <iostream>

float snowDay(int hours, float onGround, float rate, float melt) {
    for(int i = 0; i < hours; i++) {
        onGround += rate; 
        onGround -= melt;
    }
    return onGround;
}

int main() {
    int hours;
    float onGround, rate, melt;

    std::cout << "Enter the number of hours: ";
    std::cin >> hours;

    std::cout << "Enter how much snow is on the ground: ";
    std::cin >> onGround;

    std::cout << "Enter the rate of snow fall: ";
    std::cin >> rate;

    std::cout << "Enter the proportion of snow melting per hour: ";
    std::cin >> melt;

    float result = snowDay(hours, onGround, rate, melt);
    std::cout << "Amount of snow on the ground after the given hours: " << result << std::endl;
    
    return 0;
}