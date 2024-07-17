#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    return initialSnow + rateOfSnowFall * hours - proportionMeltingPerHour * hours;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionMeltingPerHour;

    cout << fixed << setprecision(6);
    cout << calculateSnow(hours, initialSnow, rateOfSnowFall, proportionMeltingPerHour) << endl;

    return 0;
}