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

int snowDay(int h, float s, float sf, float mr) {
    float currentSnow = s;
    for (int i = 0; i < h; i++) {
        currentSnow += sf;
        if (currentSnow > 0)
            currentSnow -= mr;
    }
    return currentSnow;
}