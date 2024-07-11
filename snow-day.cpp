#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float snowFallPerHour, float meltingRatePerHour) {
    double snow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        snow += snowFallPerHour - meltingRatePerHour;
    }
    
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFallPerHour, meltingRatePerHour;
    cin >> initialSnow >> snowFallPerHour >> meltingRatePerHour;
    
    cout << fixed << setprecision(10);
    cout << snowDay(hours, initialSnow, snowFallPerHour, meltingRatePerHour) << endl;

    return 0;
}