#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = 0.0;
    
    for (int i = 1; i <= hours; i++) {
        if (i == 1) {
            totalSnow += initialSnow + rateOfSnowfall;
        } else {
            totalSnow -= totalSnow * proportionOfSnowMeltingPerHour;
            totalSnow += rateOfSnowfall;
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionOfSnowMeltingPerHour;

    cin >> hours >> initialSnow >> rateOfSnowfall >> proportionOfSnowMeltingPerHour;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, proportionOfSnowMeltingPerHour);

    return 0;
}