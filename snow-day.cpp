#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfFall, float meltPerHour) {
    return round((groundSnow + (rateOfFall * hours)) * (1 - pow(1 - meltPerHour, hours)));
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfFall, meltPerHour;
    cin >> groundSnow >> rateOfFall >> meltPerHour;

    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfFall, meltPerHour) << endl;

    return 0;
}