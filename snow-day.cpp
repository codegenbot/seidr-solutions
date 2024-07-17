#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionOfMeltingPerHour) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        if (rateOfSnowFall > 0.0) {
            totalSnow += rateOfSnowFall;
        }
        totalSnow *= (1 - proportionOfMeltingPerHour);
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfSnowFall, proportionOfMeltingPerHour;
    cin >> groundSnow >> rateOfSnowFall >> proportionOfMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfSnowFall, proportionOfMeltingPerHour) << endl;
    return 0;
}