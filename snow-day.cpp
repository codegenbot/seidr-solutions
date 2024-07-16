#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = static_cast<double>(initialSnow);
    
    for (int i = 0; i < hours; i++) {
        totalSnow = static_cast<double>(totalSnow) + rateOfSnowFall - static_cast<double>(totalSnow * proportionOfSnowMeltingPerHour);
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    cin >> hours >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    cout << fixed << setprecision(10) << static_cast<double>(snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour)) << endl;

    return 0;
}