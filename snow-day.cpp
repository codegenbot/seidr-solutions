#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow *= (1 - proportionOfSnowMeltingPerHour);
    }
    
    return groundSnow + totalSnow;
}

int main() {
    int hours;
    float groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    cin >> hours >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    return 0;
}