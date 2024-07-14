#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, double initialSnow, double rateOfSnowFall, double proportionOfSnowMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        double snowAccumulation = rateOfSnowFall - rateOfSnowFall * proportionOfSnowMeltingPerHour;
        totalSnow += snowAccumulation;
        initialSnow -= snowAccumulation * proportionOfSnowMeltingPerHour;
        initialSnow = min(initialSnow + rateOfSnowFall, totalSnow);
    }
    
    return initialSnow;
}

int main() {
    int hours;
    cin >> hours;
    double initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}