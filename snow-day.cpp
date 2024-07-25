#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfFall, float meltPerHour) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall;
        if (totalSnow > groundSnow) {
            totalSnow -= meltPerHour;
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfFall, meltPerHour;
    cin >> groundSnow >> rateOfFall >> meltPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfFall, meltPerHour);
    return 0;
}