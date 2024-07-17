#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float snowFall, float meltingRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; ++i) {
        snow += snowFall - meltingRate * snow;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFall, meltingRate;
    cin >> initialSnow >> snowFall >> meltingRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowFall, meltingRate) << endl;
    return 0;
}