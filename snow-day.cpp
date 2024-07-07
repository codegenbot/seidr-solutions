#include <iostream>
#include <iomanip>

using namespace std;

double snowDay(int hours, double groundSnow, double rateOfSnowFall, double proportionOfSnowMeltingPerHour) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall - proportionOfSnowMeltingPerHour * groundSnow;
        groundSnow = max(0.0, groundSnow + rateOfSnowFall - proportionOfSnowMeltingPerHour * groundSnow);
    }
    return groundSnow;
}

int main() {
    int hours;
    double groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    cin >> hours >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    cout << fixed << setprecision(10);
    cout << snowDay(hours, groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;

    return 0;
}