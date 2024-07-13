#include <cmath>
#include <cstdio>

double snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    double totalSnow = groundSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow -= totalSnow * proportionMeltingPerHour;
    }
    
    return totalSnow;
}

int main() {
    double result = snowDay(5, 10.0f, 2.0f, 0.1f);
    printf("%f\n", result); 
    return 0;
}