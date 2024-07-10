#include <iostream>
#include <iomanip>

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double snow = initialSnow;
    
    for (int i = 0; i < hours; ++i) {
        if (rateOfSnowfall > 0.0) {
            snow += rateOfSnowfall;
        }
        
        if (proportionMeltingPerHour > 0.0) {
            snow -= std::setprecision(10) << snow * proportionMeltingPerHour;
        }
    }
    
    return snow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;

    std::cin >> hours >> initialSnow >> rateOfSnowfall >> proportionMeltingPerHour;

    double result = snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour);

    std::cout << std::fixed << std::setprecision(2) << result << std::endl;

    return 0;
}