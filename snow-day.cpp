#include <iostream>
#include <iomanip>

using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow -= totalSnow * proportionMeltingPerHour;
    }
    
    return initialSnow + totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionMeltingPerHour;

    cin >> hours >> initialSnow >> rateOfSnowFall >> proportionMeltingPerHour;

    cout << fixed << setprecision(10) << showpoint << scientific << snowDay(hours, initialSnow, rateOfSnowFall, proportionMeltingPerHour);

    return 0;
}