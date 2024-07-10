#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfFall, float meltRate) {
    return round((groundSnow + (rateOfFall * hours)) * (1 - pow(meltRate, hours)));
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfFall, meltRate;
    cin >> groundSnow >> rateOfFall >> meltRate;

    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfFall, meltRate);

    return 0;
}