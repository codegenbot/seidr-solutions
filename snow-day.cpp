#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float snowfallRate, float meltingRate) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowfallRate;
        totalSnow -= meltingRate * totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowfallRate, meltingRate;
    cin >> initialSnow >> snowfallRate >> meltingRate;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowfallRate, meltingRate) << endl;

    return 0;
}