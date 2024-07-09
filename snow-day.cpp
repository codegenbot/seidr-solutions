#include <iostream>
#include <iomanip>

using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = static_cast<double>(initialSnow);
    for (double i = 0; i < static_cast<double>(hours); i++) {
        totalSnow = std::nearbyint(totalSnow + rateOfSnowFall) - static_cast<int>(totalSnow * proportionOfSnowMeltingPerHour);
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setiosflags(ios::fixed) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}