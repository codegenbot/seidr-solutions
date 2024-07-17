#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float rateOfSnowFall, float proportionOfMeltingPerHour) {
    return initialSnow + (hours * rateOfSnowFall) - ((hours * proportionOfMeltingPerHour) * (initialSnow + (rateOfSnowFall * hours)));
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfMeltingPerHour;
    cout << fixed << setprecision(6) << calculateSnow(hours, initialSnow, rateOfSnowFall, proportionOfMeltingPerHour) << endl;
    return 0;
}