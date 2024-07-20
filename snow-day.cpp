```
#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, double groundSnow, double rateOfSnowFall, double proportionOfSnowMeltingPerHour) {
    double totalSnow = groundSnow;
    for (int i = 0; i < hours; i++) {
        double newSnow = rateOfSnowFall - proportionOfSnowMeltingPerHour * totalSnow;
        totalSnow += newSnow;
        if(totalSnow > groundSnow + rateOfSnowFall) totalSnow = groundSnow + rateOfSnowFall;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    double groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}