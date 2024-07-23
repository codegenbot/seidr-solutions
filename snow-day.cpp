#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    long long totalSnowInt = initialSnow;
    for (int i = 0; i < hours; i++) {
        long long newTotalSnow = totalSnowInt + llround(rateOfSnowFall) - llround(proportionOfSnowMeltingPerHour * totalSnowInt);
        totalSnowInt = newTotalSnow > 0 ? newTotalSnow : 0;
    }
    return static_cast<double>(totalSnowInt);
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(15) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}