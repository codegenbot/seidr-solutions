#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    return groundSnow + (rateOfSnowFall * hours) - (proportionMeltingPerHour * hours);
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfSnowFall, proportionMeltingPerHour;
    cin >> groundSnow >> rateOfSnowFall >> proportionMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfSnowFall, proportionMeltingPerHour) << endl;
    return 0;
}