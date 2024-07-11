#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionPerHour) {
    double totalSnow = 0.0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow *= (1 - proportionPerHour);
    }
    
    return totalSnow + initialSnow;
}

int main() {
    int hours, initialSnow;
    float rateOfSnowFall, proportionPerHour;

    cin >> hours >> initialSnow >> rateOfSnowFall >> proportionPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionPerHour) << endl;
    
    return 0;
}