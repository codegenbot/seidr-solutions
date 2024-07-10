#include <iostream>
using namespace std;

float snowDay(int hours, float snowOnGround, float rateOfSnowFall, float proportionMeltingPerHour) {
    return (snowOnGround + rateOfSnowFall * hours - proportionMeltingPerHour * hours);
}

int main() {
    int hours;
    cin >> hours;
    float snowOnGround, rateOfSnowFall, proportionMeltingPerHour;
    cin >> snowOnGround >> rateOfSnowFall >> proportionMeltingPerHour;
    cout << fixed << setprecision(6) << snowDay(hours, snowOnGround, rateOfSnowFall, proportionMeltingPerHour) << endl;
    return 0;
}