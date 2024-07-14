#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float snowFallRate, float meltRate) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate - meltRate;
    }
    
    return totalSnow + initialSnow;
}

int main() {
    int hours;
    cin >> hours;

    float initialSnow, snowFallRate, meltRate;
    cin >> initialSnow >> snowFallRate >> meltRate;

    double result = snowDay(hours, initialSnow, snowFallRate, meltRate);

    cout << fixed << setprecision(10);
    cout << result << endl;

    return 0;
}