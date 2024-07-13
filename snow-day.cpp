#include <cmath>
#include <iostream>

double snowDay(int hours, double groundSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    double totalSnow = groundSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall; 
        totalSnow -= round(totalSnow * proportionMeltingPerHour); 
    }
    
    return totalSnow;
}

int main() {
    int hours;
    double groundSnow;
    float rateOfSnowFall, proportionMeltingPerHour;

    std::cin >> hours >> groundSnow >> rateOfSnowFall >> proportionMeltingPerHour;

    double totalSnow = snowDay(hours, groundSnow, rateOfSnowFall, proportionMeltingPerHour);
    std::cout << "The amount of snow on the ground after the given hours is: " << totalSnow << std::endl;

    return 0;
}