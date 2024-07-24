#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfMeltingPerHour) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        double newSnow = rateOfSnowFall - initialSnow * proportionOfMeltingPerHour;
        totalSnow += newSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfMeltingPerHour);
    return 0;
}