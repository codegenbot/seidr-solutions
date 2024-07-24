#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = 0;
    double snowAdded = 0;
    
    for (int i = 0; i < hours; i++) {
        if (rateOfSnowFall > 0.0) {
            snowAdded += rateOfSnowFall;
        }
        totalSnow += initialSnow + snowAdded - (proportionOfSnowMeltingPerHour * totalSnow);
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    cin >> hours >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;

    return 0;
}