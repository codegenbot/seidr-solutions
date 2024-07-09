```
#include <iostream>
#include <iomanip>

using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall - totalSnow * proportionOfSnowMeltingPerHour;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    double calculatedSnow = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);
    cout << std::fixed << std::setprecision(2) << calculatedSnow << endl;
    return 0;
}