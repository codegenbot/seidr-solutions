#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    return initialSnow + rateOfSnowFall * hours - proportionOfSnowMeltingPerHour * hours;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(10) << calculateSnow(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}