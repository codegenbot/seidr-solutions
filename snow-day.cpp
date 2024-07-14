#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float snowFallRate, float meltRate) {
    double snow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        snow += snowFallRate;
        if (snow > 0)
            snow -= snow * meltRate;
    }
    
    return snow;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, meltRate;

    cin >> hours >> initialSnow >> snowFallRate >> meltRate;

    cout << fixed << setprecision(10);
    cout << snowDay(hours, initialSnow, snowFallRate, meltRate) << endl;

    return 0;
}