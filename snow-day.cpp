#include <iostream>
#include <iomanip>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        if (initialSnow > 0) {
            initialSnow += rateOfSnowFall;
        }
        initialSnow -= initialSnow * proportionMeltingPerHour;
    }
    
    return initialSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionMeltingPerHour;

    cin >> hours >> initialSnow >> rateOfSnowFall >> proportionMeltingPerHour;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionMeltingPerHour);

    return 0;
}