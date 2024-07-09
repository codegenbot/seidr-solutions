```
#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = static_cast<double>(initialSnow);
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        if (totalSnow > 0)
            totalSnow -= totalSnow * proportionOfSnowMeltingPerHour;
        else
            totalSnow = 0;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(2) << showpoint << totalSnow << endl;
}