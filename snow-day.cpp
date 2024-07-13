```cpp
#include <cmath>

double snowDay(int hours, double groundSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    double totalSnow = groundSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall; 
        totalSnow -= round(totalSnow * proportionMeltingPerHour); 
    }
    
    return totalSnow;
}

int main() {
    int hours = 10; 
    double groundSnow = 10.0; 
    float rateOfSnowFall = 2.5f; 
    float proportionMeltingPerHour = 0.1f; 
    
    double result = snowDay(hours, groundSnow, rateOfSnowFall, proportionMeltingPerHour);
    
    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << std::endl;
    
    return 0;
}