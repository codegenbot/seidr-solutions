#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    return round((groundSnow + (rateOfSnowFall * hours)) * (1 - (proportionMeltingPerHour * hours)));
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfSnowFall, proportionMeltingPerHour;
    cin >> groundSnow >> rateOfSnowFall >> proportionMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfSnowFall, proportionMeltingPerHour) << endl;
    return 0;
}