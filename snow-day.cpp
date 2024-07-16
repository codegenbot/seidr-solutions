#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float fallRate, float meltRate) {
    return round((groundSnow + (fallRate * hours)) * (1 - (meltRate * hours)));
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, fallRate, meltRate;
    cin >> groundSnow >> fallRate >> meltRate;

    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, fallRate, meltRate) << endl;

    return 0;
}