#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float meltRate) {
    return groundSnow + (rate * hours) - ((meltRate * 100) * hours);
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rate, meltRate;
    cin >> groundSnow >> rate >> meltRate;

    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rate, meltRate);

    return 0;
}