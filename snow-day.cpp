#include <iostream>

float snowDay(int hours, float onTheGround, float rateOfSnowfall, float proportionMeltingPerHour) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; ++i) {
        onTheGround += rateOfSnowfall - (proportionMeltingPerHour * onTheGround);
    }
    
    return onTheGround;
}

int main() {
    int hours;
    std::cin >> hours;
    float onTheGround, rateOfSnowfall, proportionMeltingPerHour;
    std::cin >> onTheGround >> rateOfSnowfall >> proportionMeltingPerHour;
    std::cout << snowDay(hours, onTheGround, rateOfSnowfall, proportionMeltingPerHour) << std::endl;
    
    return 0;
}