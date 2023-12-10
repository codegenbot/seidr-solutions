#include <iostream>
using namespace std;
float snowDay(int hours, float groundSnow, float rateSnowFall, float proportionMelt) {
    int hour = 0;
    while (hour <= hours && groundSnow >= 0) {
        groundSnow += rateSnowFall * (1 - pow(proportionMelt, hour));
        hour++;
    }
    return groundSnow;
}
int main() {
    int hours;
    float groundSnow, rateSnowFall, proportionMelt;
    cin >> hours >> groundSnow >> rateSnowFall >> proportionMelt;
    cout << snowDay(hours, groundSnow, rateSnowFall, proportionMelt) << endl;
    return 0;
}