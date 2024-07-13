#include <iostream>
#include <iomanip>

int snowDay(int, float, float, float);

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFall, meltRate;
    cin >> initialSnow >> snowFall >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowFall, meltRate) << endl;
    return 0;
}